#include "LinkedList.spec.h"    // Test::ADT::LinkedList
#include "SearchLowest.spec.h"  // Test::Search::lowest
#include "BinarySearch.spec.h"  // Test::Search::binary_search
#include "QuickSort.spec.h"     // Test::Sort::quick_sort
#include "BubbleSort.spec.h"    // Test::Sort::bubble_sort
#include "SelectionSort.spec.h" // Test::Sort::selection_sort
#include "InsertionSort.spec.h" // Test::Sort::insertion_sort
#include "MergeSort.spec.h"     // Test::Sort::merge_sort
#include "RadixSort.spec.h"     // Test::Sort::radix_sort

int main() {
  Test::ADT::linkedlist();
  Test::Search::lowest();
  Test::Search::binary_search();
  Test::Sort::quick_sort();
  Test::Sort::bubble_sort();
  Test::Sort::selection_sort();
  Test::Sort::insertion_sort();
  Test::Sort::merge_sort();
  Test::Sort::radix_sort();

  return 0;
}
