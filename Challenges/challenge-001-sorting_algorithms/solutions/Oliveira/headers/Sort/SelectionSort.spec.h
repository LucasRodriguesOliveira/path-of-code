#ifndef SELECTION_SORT_SPEC_H
#define SELECTION_SORT_SPEC_H

#include "SelectionSort.h" // Sort::selection_sort
#include <array>           // std::array<T, N>
#include <iostream>        // std::cout

namespace Test {
  namespace Sort {
    static void selection_sort() {
      std::cout << "\nSelection Sort\n";
      std::array<int, 10> myAray{ 8, 10, 5, 9, 20, 4, 13, 2, 18, 21 };

      std::cout << "Original array: ";
      for (const int& number : myAray) {
        std::cout << number << ", ";
      }
      std::cout << '\n';

      ::Sort::selection_sort(myAray);

      std::cout << "Sorted array: ";
      for (const int& number : myAray) {
        std::cout << number << ", ";
      }
      std::cout << '\n';
    }
  };
};

#endif // SELECTION_SORT_SPEC_H
