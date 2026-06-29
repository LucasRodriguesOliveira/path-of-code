#ifndef BUBBLE_SORT_SPEC_H
#define BUBBLE_SORT_SPEC_H

#include "BubbleSort.h" // Sort::bubble_sort<N>
#include <array>        // std::array<T, N>
#include <iostream>     // std::cout

namespace Test {
  namespace Sort {
    static void bubble_sort() {
      std::array<int, 5> myArray{ 5, 3, 8, 1, 2 };
      std::cout << "Original array: [";
      for (int number : myArray) {
        std::cout << number << ", ";
      }
      std::cout << "]\n";

      ::Sort::bubble_sort(myArray);
      std::cout << "Sorted array: [";
      for (int number : myArray) {
        std::cout << number << ", ";
      }
      std::cout << "]\n";
    }
  };
};

#endif // !BUBBLE_SORT_SPEC_H
