#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector> // std::vector<T>

namespace Sort {
  template <typename T>
  void merge(std::vector<T>& vec, int start, int mid, int end);

  template <typename T>
  void merge_sort_impl(std::vector<T>& vec, int start, int end) {
    if (start < end) {
      int mid{ (start + end) / 2 };

      merge_sort_impl(vec, start, mid);
      merge_sort_impl(vec, mid + 1, end);
      merge(vec, start, mid, end);
    }
  }

  template <typename T>
  void merge_sort(std::vector<T>& vec) {
    if (vec.empty()) {
      return;
    }

    merge_sort_impl(vec, 0, static_cast<int>(vec.size()) - 1);
  }

  template <typename T>
  void merge(std::vector<T>& vec, int start, int mid, int end) {
    int i{ 0 }, j{ 0 }, k{ start };
    const int leftLength{ mid - start + 1 };
    const int rightLength{ end - mid };

    std::vector<T> left(leftLength);
    std::vector<T> right(rightLength);

    for (; i < leftLength; i++) {
      left[i] = vec[start + i];
    }

    for (; j < rightLength; j++) {
      right[j] = vec[mid + 1 + j];
    }

    i = 0;
    j = 0;

    while (i < leftLength && j < rightLength) {
      if (left[i] <= right[j]) {
        vec[k] = left[i];
        i++;
      }
      else {
        vec[k] = right[j];
        j++;
      }
      k++;
    }

    while (i < leftLength) {
      vec[k] = left[i];
      i++;
      k++;
    }

    while (j < rightLength) {
      vec[k] = right[j];
      j++;
      k++;
    }
  }
};

#endif // !MERGE_SORT_H
