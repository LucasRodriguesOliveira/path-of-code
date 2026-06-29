#ifndef RADIX_SORT_H
#define RADIX_SORT_H

#include <array>   // std::array<T, N>
#include <cstddef> // std::size_t

namespace Sort {
  template <std::size_t N>
  void radix_sort(std::array<int, N>& array) {
    const std::size_t length{ array.size() };
    int maxValue{ array[0] };

    for (std::size_t i{ 1 }; i < length; i++) {
      if (array[i] > maxValue) {
        maxValue = array[i];
      }
    }

    std::size_t exp{ 1 };
    std::array < std::array<int, N>, 10> radixArray{};
    std::array<int, 10> counts{};

    while (maxValue / exp > 0) {
      for (std::size_t i{}; i < length; i++) {
        std::size_t radixIndex{ (array[i] / exp) % 10 };
        radixArray[radixIndex][counts[radixIndex]] = array[i];
        counts[radixIndex]++;
      }

      std::size_t pos{};
      for (std::size_t i{}; i < 10; i++) {
        for (std::size_t j{}; j < counts[i]; j++) {
          array[pos] = radixArray[i][j];
          pos++;
        }

        counts[i] = 0;
      }

      exp *= 10;
    }
  }
};

#endif // !RADIX_SORT_H
