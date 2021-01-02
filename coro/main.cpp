#include <iostream>
#include "generator.hpp"

auto fibonacci() -> cppcoro::generator<std::uint64_t>
{
  std::uint64_t a = 0, b = 1;
  while (true)
  {
    co_yield b;
    auto tmp = a;
    a = b;
    b += tmp;

    if (b > 1000) {
        co_return;
    }
  }
}

void usage()
{
  for (auto i : fibonacci())
  {
    if (i > 1'000'000) break;
    std::cout << i << std::endl;
  }
}

int main()
{
    usage();
    return 0;
}
