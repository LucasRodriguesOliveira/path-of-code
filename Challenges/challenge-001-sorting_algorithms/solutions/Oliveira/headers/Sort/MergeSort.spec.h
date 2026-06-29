#ifndef MERGE_SORT_SPEC_H
#define MERGE_SORT_SPEC_H

#include "MergeSort.h" // Sort::merge_sort
#include <vector>       // std::vector<T>
#include <iostream>    // std::cout

namespace Test {
  namespace Sort {
    static void merge_sort() {
      std::cout << "\nMerge Sort\n";
      std::vector<double> myArray{ 3, 7, 6, -10, 15, 23.5, 55, -13 };

      std::cout << "Original Array: ";
      for (const double& number : myArray) {
        std::cout << number << " ";
      }
      std::cout << '\n';

      ::Sort::merge_sort(myArray);

      std::cout << "Sorted Array: ";
      for (const double& number : myArray) {
        std::cout << number << " ";
      }
      std::cout << '\n';
    }
  };
};

#endif // !MERGE_SORT_SPEC_H
