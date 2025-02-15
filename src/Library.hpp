// #pragma once

class Library {
public:
  Library() = default;

  auto static add(double first, double second) -> double {
    return first + second;
  }
};
