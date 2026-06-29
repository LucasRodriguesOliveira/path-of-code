#ifndef QUICK_SORT_SPEC_H
#define QUICK_SORT_SPEC_H

#include "QuickSort.h" // Sort::quick_sort<N>
#include <array>       // std::array<T, N>
#include <iostream>    // std::cout

namespace Test {
  namespace Sort {
    static void quick_sort() {
      std::array<int, 8> myArray{ 64, 34, 25, 12, 22, 11, 90, 5 };
      int length{ static_cast<int>(myArray.size()) };

      std::cout << "Original array: [";
      for (int number : myArray) {
        std::cout << number << ", ";
      }
      std::cout << "]\n";

      ::Sort::quick_sort(myArray, 0, length - 1);
      std::cout << "Sorted array: [";
      for (int number : myArray) {
        std::cout << number << ", ";
      }
      std::cout << "]\n";
    }
  };
};

#endif // !QUICK_SORT_SPEC_H
