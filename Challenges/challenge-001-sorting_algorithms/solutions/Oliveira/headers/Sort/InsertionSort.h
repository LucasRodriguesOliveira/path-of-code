#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <cstddef> // std::size_t
#include <array>   // std::array<T, N>

namespace Sort {
  template <std::size_t N>
  static void insertion_sort(std::array<int, N>& array) {
    int length{ array.size() };

    for (int i{ 1 }; i < length; i++) {
      int insertIndex{ i };
      int j{ i - 1 };
      int currentValue{ array[i] };

      while (j >= 0 && array[j] > currentValue) {
        array[j + 1] = array[j];
        insertIndex = j;
        j--;
      }

      array[insertIndex] = currentValue;
    }
  }
};

#endif // !INSERTION_SORT_H
