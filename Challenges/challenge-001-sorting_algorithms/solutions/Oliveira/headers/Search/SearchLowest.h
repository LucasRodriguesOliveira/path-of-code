#ifndef SEARCH_LOWEST_H
#define SEARCH_LOWEST_H

#include <array> // std::array<T, N>

namespace Search {
  int lowest(std::array<int, 10>& arr) {
    if (arr.size() == 0) {
      return -1;
    }

    int low{ arr[0] };
    int lowPos{ 0 };
    int pos{ 0 };
    int length{ static_cast<int>(arr.size()) };

    for (int num : arr) {
      if (num < low) {
        low = num;
        lowPos = pos;
      }
      pos++;
    }

    return lowPos;
  }
};

#endif // SEARCH_LOWEST_H
