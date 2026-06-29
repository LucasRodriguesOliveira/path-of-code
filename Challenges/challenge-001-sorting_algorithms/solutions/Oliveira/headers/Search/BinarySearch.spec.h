#ifndef BINARY_SEARCH_SPEC_H
#define BINARY_SEARCH_SPEC_H

#include "BinarySearch.h" // Search::binary_search<N>
#include <array>          // std::array<T, N>
#include <iostream>       // std::cout

namespace Test {
  namespace Search {
    static void binary_search() {
      std::cout << "\nBinary Search\n";
      std::array<int, 10> myArray{ 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
      int target{ 15 };

      std::cout << "Original Array: ";
      for (const int& number : myArray) {
        std::cout << number << " ";
      }
      std::cout << '\n';
      std::cout << "Element to search: " << target << '\n';

      int index{ ::Search::binarySearch(myArray, target) };

      std::cout << "Element [" << target << "] found at index >>" << index << "<<\n";
    }
  };
};

#endif // !BINARY_SEARCH_SPEC_H
