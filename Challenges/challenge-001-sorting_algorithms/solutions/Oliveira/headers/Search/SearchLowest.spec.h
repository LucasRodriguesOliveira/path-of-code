#ifndef SEARCH_LOWEST_SPEC_H
#define SEARCH_LOWEST_SPEC_H

#include "SearchLowest.h" // Search::lowest
#include <array>          // std::array<T, N>
#include <iostream>       // std::cout

namespace Test {
  namespace Search {
    static void lowest() {
      std::array<int, 10> myArray{ 8, 3, 15, 20, 1, 7, 9, 10, 5, 4 };
      int lowestNumPos{ ::Search::lowest(myArray) };

      std::cout << "Lowest number " << "[" << lowestNumPos << "]: " << myArray[lowestNumPos] << '\n';
    };
  };
};

#endif // !SEARCH_LOWEST_SPEC_H
