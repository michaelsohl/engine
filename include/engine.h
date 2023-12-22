#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define ENGINE_EXPORT __declspec(dllexport)
#else
  #define ENGINE_EXPORT
#endif

ENGINE_EXPORT void engine();
ENGINE_EXPORT void engine_print_vector(const std::vector<std::string> &strings);
