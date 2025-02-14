#include "spdlog/spdlog.h"
#include "src/Library.hpp"

int main(int argc, char **argv) {
  spdlog::set_level(spdlog::level::debug);
  spdlog::set_pattern("[%T.%e] %^[%L]%$ %v");
  spdlog::info("starting main");

  Library lib;
  constexpr int var1{5};
  spdlog::info("Sum of 5 and 3 is {}", lib.add(var1, 3));

  spdlog::info("main done");
  return 0;
}
