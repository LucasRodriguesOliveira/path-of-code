#ifndef RADIX_SORT_SPEC_H
#define RADIX_SORT_SPEC_H

#include "RadixSort.h" // Sort::radix_sort<N>
#include <array>       // std::array<T, N>
#include <iostream>    // std::cout

namespace Test {
  namespace Sort {
    static void radix_sort() {
      std::cout << "\nRadix Sort\n";
      std::array<int, 8> myArray{ 170, 45, 75, 90, 802, 24, 2, 66 };

      std::cout << "Original Array: ";
      for (const int& number : myArray) {
        std::cout << number << " ";
      }
      std::cout << '\n';

      ::Sort::radix_sort(myArray);

      std::cout << "Sorted Array: ";
      for (const int& number : myArray) {
        std::cout << number << " ";
      }
      std::cout << '\n';
    }
  };
};

#endif // !RADIX_SORT_SPEC_H
