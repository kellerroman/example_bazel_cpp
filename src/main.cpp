#include "spdlog/spdlog.h"

int main(int argc, char **argv) {
  spdlog::set_level(spdlog::level::debug);
  spdlog::set_pattern("[%T.%e] %^[%L]%$ %v");
  spdlog::info("starting main");

  spdlog::info("main done");
  return 0;
}
