#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <array>   // std::array<T, N>
#include <cstddef> // std::size_t
#include <cassert> // assert

namespace Sort {
  template <std::size_t N>
  int partition(std::array<int, N>& array, int low, int high) {
    assert(low >= 0 && low <= high);
    assert(high >= 0 && high <= static_cast<int>(N));

    int pivot{ array[high]};
    int i{ low - 1 };

    for (int j{ low }; j < high; j++) {
      if (array[j] <= pivot) {
        i++;

        int temp{ array[i] };
        array[i] = array[j];
        array[j] = temp;
      }
    }

    int temp{ array[i + 1] };
    array[i + 1] = array[high];
    array[high] = temp;

    return i + 1;
  }

  template <int N>
  void quick_sort(std::array<int, N>& array, int low, int high) {
    if (low < high) {
      int pivotIndex = partition(array, low, high);
      quick_sort(array, low, pivotIndex - 1);
      quick_sort(array, pivotIndex + 1, high);
    }
  }
};

#endif // QUICK_SORT_H