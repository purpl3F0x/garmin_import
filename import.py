import time
from os import listdir, path, mkdir
from os import name as os_name
from typing import Callable, List

from selenium import webdriver

TTBIN_ACTIVITIES_PATH = "/home/stavros/Documents/ttbins"
OTHER_ACTIVITIES_PATH = "/home/stavros/Downloads/activities"


def get_files_with_extention(ext: str or List[str], directory: str, func: Callable = None) -> list:
    out = []
    for o in listdir(directory):
        if path.isdir(directory + '/' + o):
            out += get_files_with_extention(ext, directory + '/' + o)
        elif type(ext) == list:
            for f in ext:
                if o.endswith(f):
                    p = path.abspath(directory + '/' + o)
                    if func:
                        func(p)
                    out.append(p)
        elif o.endswith(ext):
            p = path.abspath(directory + '/' + o)
            if func != None:
                func(p)
            out.append(p)
    return out


print('{message:{fill}{align}{width}}'
      .format(message=' Software to upload activity files to Garmin Connect ', fill='*', align='^', width=72, ))
print('{message:{fill}{align}{width}}'
      .format(message=' This software has no relation to Garmin Ltd. ', fill='*', align='^', width=72, ))
print('{message:{fill}{align}{width}}'
      .format(message=' Developed by Stavros Avramidis (@purpl3F0x) ', fill='*', align='^', width=72, ))

print("*" * 72)

username = input("Enter your email: ")
password = (lambda: __import__('getpass').getpass("Enter your password: "))()

# start Chrome
options = webdriver.ChromeOptions()
options.add_argument('headless')

url = "https://sso.garmin.com/sso/signin?service=https%3A%2F%2Fconnect.garmin.com%2Fmodern%2F&webhost=https%3A%2F%2Fconnect.garmin.com&source=https%3A%2F%2Fconnect.garmin.com%2Fel-GR%2Fsignin&redirectAfterAccountLoginUrl=https%3A%2F%2Fconnect.garmin.com%2Fmodern%2F&redirectAfterAccountCreationUrl=https%3A%2F%2Fconnect.garmin.com%2Fmodern%2F&gauthHost=https%3A%2F%2Fsso.garmin.com%2Fsso&locale=el&id=gauth-widget&cssUrl=https%3A%2F%2Fstatic.garmincdn.com%2Fcom.garmin.connect%2Fui%2Fcss%2Fgauth-custom-v1.2-min.css&privacyStatementUrl=%2F%2Fconnect.garmin.com%2Fel-GR%2Fprivacy%2F&clientId=GarminConnect&rememberMeShown=true&rememberMeChecked=false&createAccountShown=true&openCreateAccount=false&displayNameShown=false&consumeServiceTicket=false&initialFocus=true&embedWidget=false&generateExtraServiceTicket=true&generateTwoExtraServiceTickets=false&generateNoServiceTicket=false&globalOptInShown=true&globalOptInChecked=false&mobile=false&connectLegalTerms=true&locationPromptShown=true&showPassword=true"
driver = webdriver.Chrome(
    './chromedriver' if os_name != 'nt' else './chromedriver.exe')  # Optional argument, if not specified will search path.
driver.set_window_size(1124, 850)
driver.get(url)

usr = driver.find_element_by_id("username")
passw = driver.find_element_by_id("password")
logbtn = driver.find_element_by_id("login-btn-signin")
usr.send_keys(username)
passw.send_keys(password)
logbtn.click()

if 'https://connect.garmin.com/modern/' in driver.page_source:
    print("Logged In")

driver.get('https://connect.garmin.com/modern/import-data')
time.sleep(1)
upload_form = driver.find_element_by_class_name("dz-hidden-input")

import ttbin

try:
    mkdir('exported')
except FileExistsError:
    pass

tt_exported = []
TTBIN_ACTIVITIES_PATH = 0
if TTBIN_ACTIVITIES_PATH:
    print()
    print("Searching for tomtom activity files:")

    tt_activities = get_files_with_extention(
        '.ttbin',
        TTBIN_ACTIVITIES_PATH,
        lambda file: (
            print('\tconverting %s to tcx' % file),
            ttbin.export_ttbin(file, 'exported/' + path.basename(file)[:-6] + '.tcx', 'tcx')
        )
    )
    for f in tt_activities:
        ttbin.export_ttbin(f, 'exported/' + path.basename(f)[:-6] + '.tcx', 'tcx')
    tt_exported = get_files_with_extention('.tcx', './exported')
    print()
    print("Found {} tomtom files for upload".format(len(tt_exported)))

activities = []
activities = get_files_with_extention(
    ['.tcx'],
    OTHER_ACTIVITIES_PATH,
    lambda file: (
        print('\tFound %s' % file),
    ),
)

print()
print("Found {} files for upload".format(len(activities)))

all_act = activities
if tt_exported:
    if tt_exported[0] not in activities:
        all_act = tt_exported + activities
        print("...and {} from tomtom exported path".format(len(tt_exported)))

print('\nthis my take a while...\n')
upload_form.send_keys(" \n".join(all_act))

print('\npress the "Import Data" button...')

input()
driver.close()
