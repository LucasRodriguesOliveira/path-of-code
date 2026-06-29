#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <array>   // std::array<T, N>
#include <cstddef> // std::size_t

namespace Sort {
  template <std::size_t N>
  void selection_sort(std::array<int, N>& array) {
    std::size_t length{ array.size() };

    for (std::size_t i{ 0 }; i < length; i++) {
      std::size_t minIndex{ i };

      for (std::size_t j{ i + 1 }; j < length; j++) {
        if (array[j] < array[minIndex]) {
          minIndex = j;
        }
      }

      int temp{ array[i] };
      array[i] = array[minIndex];
      array[minIndex] = temp;
    }
  }
};

#endif // SELECTION_SORT_H
