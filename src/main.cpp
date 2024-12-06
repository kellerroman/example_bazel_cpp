#include "spdlog/spdlog.h"
#include "src/Library.hpp"

int main(int argc, char **argv) {
  spdlog::set_level(spdlog::level::debug);
  spdlog::set_pattern("[%T.%e] %^[%L]%$ %v");
  spdlog::info("starting main");

  Library lib;
  spdlog::info("Sum of 5 and 3 is {}", lib.add(5, 3));

  spdlog::info("main done");
  return 0;
}
