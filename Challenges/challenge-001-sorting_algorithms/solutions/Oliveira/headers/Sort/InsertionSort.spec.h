#ifndef INSERTION_SORT_SPEC_H
#define INSERTION_SORT_SPEC_H

#include "InsertionSort.h" // Sort::insertion_sort
#include <array>           // std::array<T, N>
#include <iostream>        // std::cout

namespace Test {
  namespace Sort {
    static void insertion_sort() {
      std::cout << "\nInsertion Sort\n";
      std::array<int, 8> myArray{ 64, 34, 25, 12, 22, 11, 90, 5 };

      std::cout << "Original Array: ";
      for (const int& number : myArray) {
        std::cout << number << " ";
      }
      std::cout << '\n';

      ::Sort::insertion_sort(myArray);

      std::cout << "Sorted Array: ";
      for (const int& number : myArray) {
        std::cout << number << " ";
      }
      std::cout << '\n';
    }
  };
};

#endif // !INSERTION_SORT_SPEC_H
