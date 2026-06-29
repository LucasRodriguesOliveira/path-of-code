#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <array> // std::array<T, N>

namespace Sort {
  template <int N>
  void bubble_sort(std::array<int, N>& array) {
    int length{ static_cast<int>(array.size()) };

    for (int i{ 0 }; i < (length - 1); i++) {
      for (int j{ i + 1 }; j < length; j++) {
        if (array[j] < array[i]) {
          int temp{ array[i] };
          array[i] = array[j];
          array[j] = temp;
        }
      }
    }
  }
};

#endif // BUBLE_SORT_H
