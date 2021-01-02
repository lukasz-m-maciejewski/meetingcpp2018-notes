#include <iostream>
#include <vector>
#include <algorithm>

#define AUTO auto

template <typename T> void P(const T& x) { std::cout << (char)x; }

int main() {
    AUTO icon_monkey = 5;
    AUTO icon_taxi = std::vector<decltype(icon_monkey)> { 'b', 'q', '`', 'r', 'g', };

    AUTO lambda = [&icon_taxi]() {
                      for (AUTO icon_beer = icon_taxi.size() - 1; icon_beer >= 0; icon_beer--)
                          icon_taxi[icon_beer]++;
                      return icon_taxi.size();
                  };

    std::for_each(icon_taxi.begin(), icon_taxi.end(),
                  [&](AUTO& n) { P((++n || lambda()) * n); });
}
