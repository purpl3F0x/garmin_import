# garmin_import
A tool I made for batch importing tomtom .ttbin files to Garmin MyConnect.
It also supports uploading .tcx, .gpx, .fit etc.. 




Thank to this guyz:
- https://github.com/ryanbinns/ttwatch,
    -  https://libusb.info/
    - https://github.com/protobuf-c/protobuf-c
    - https://developers.google.com/protocol-buffers/
- https://github.com/pybind/pybind11


| Instructions


Just update the paths on the python script, also make sure you have downloaded 
the appropriate chrome webdriver. The python library (ttibin.pyd) is pre-compiled and in theory 
it should work on any os, else you 'll need to compile it your self.