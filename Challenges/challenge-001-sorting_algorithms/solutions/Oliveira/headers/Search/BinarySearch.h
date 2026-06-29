#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <array>   // std::array<T, N>
#include <cstddef> // std::size_t

namespace Search {
  template <std::size_t N>
  int binarySearch(std::array<int, N>& array, int element) {
    int length{ static_cast<int>(array.size())};
    int left{};
    int right{ length - 1 };

    while (left <= right) {
      int mid{ (left + right) / 2 };

      if (array[mid] == element) {
        return mid;
      }

      if (array[mid] < element) {
        left = mid + 1;
      }
      else {
        right = mid - 1;
      }
    }

    return -1;
  }
};

#endif // !BINARY_SEARCH_H
