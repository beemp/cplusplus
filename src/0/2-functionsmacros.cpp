// Copyright (c) 2016 Copyright Holder All Rights Reserved.
#include <iostream>
#define sqr(n) ((n)*(n))

int cube(int x);

int main() {
  int x;
  std::cout << "Enter number>";
  std::cin >> x;
  std::cout << "squared " << sqr(x) << ", cubed " << cube(x) << '\n';
  return 0;
}

int cube(int x) {
  return x * sqr(x);
}
