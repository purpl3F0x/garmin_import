/*
 * @filename:   test.cc
 * @author:     Stavros Avramidis
 * @date:       28/3/2019
 */

// pybind11 headers on top
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <cmath>// include this at start 'cause msvc linker freaks out
// cpp headers
#include <exception>
#include <string>
// c headers
#include <cstdlib>
#include <cstdio>
#include <cstring>
// ttwatch headers
extern "C" {
#include "ttbin.h"
#include "export.h"
}


namespace py = pybind11;

int export_ttbin(const char *iFile, const char *oFile = "", const char *format = "csv") {
  auto input_file = fopen(iFile, "r");
  auto output_file = fopen(oFile, "w");

  for (auto i: OFFLINE_FORMATS)
    if (strcmp(i.name, format)==0) {
      TTBIN_FILE *ttbin = read_ttbin_file(input_file);

      try {
        (*i.producer)(ttbin, output_file);
      } catch (...) {
        throw std::runtime_error("Unable to create output file: ");
      }

      fclose(output_file);
      return 0;
    }
  throw std::runtime_error("Invalid export format: " + std::string(format));
}

PYBIND11_MODULE(ttbin, m) {
  m.doc() = "Module for exporting ttbin to other formats"; // optional module docstring
  m.def("export_ttbin", &export_ttbin, "export ttbin to given format (csv, gpx, tcx, kml)");
}
