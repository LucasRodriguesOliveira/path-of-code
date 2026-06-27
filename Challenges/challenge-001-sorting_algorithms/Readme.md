# Challenge #1 - Sorting Algorithms

## Overview

In this challenge, we will explore some of the best-known sorting and searching algorithms in computing.

The goal is not just to make the program work, but to understand how each algorithm traverses, compares, and reorganizes the data.

This challenge was created to develop:
-   Programming logic
-   Array and collection manipulation
-   Algorithmic complexity
-   Ability to decompose problems into smaller steps
-   Reading and interpreting classic algorithms

----------

# General Rules

## Challenge Objective

Implement the requested algorithms without using pre-built implementations from the standard library.

The focus is on learning and understanding the inner workings of the algorithms.

----------

## Allowed References

The only allowed references are:
-   learncpp.com
-   cppreference.com

Also allowed:
- Asking questions to the moderators
- Requesting help in the **#ask-for-help** channel

----------

## References not allowed

The following are not permitted:

-   Artificial Intelligence of any kind such as:
    -   ChatGPT
    -   Claude
    -   Gemini
    -   Copilot   
-  External Forums
-  Stack Overflow
-   Reddit
-   Video Tutorials
-   Articles explaining the algorithms
-   Ready-made solutions
-   Public repositories containing implementations of the challenges
 
The sole purpose of this challenge is personal development.
It's okay to make mistakes or submit an incomplete solution. The important thing is that you created the code yourself.


And even more importat: That you learned something!

# Scoring rules

Checkout the [Leaderborad.md]() for a explanation about how scoring works.

# Required Algorithms

All participants must implement the following algorithms.

----------

## 1. Lowest Number

### Objective

Receive a list containing 10 positive, non-zero integers.

The algorithm must:
- Find the smallest value in the list
- Report its position within the list

### How it works

The algorithm iterates through all the elements of the list.

During execution:

1. The first element is considered the smallest value found.
2. Each new element is compared to the current smallest value.
3. If it is smaller, the value and its position are updated.
4. At the end of the list, the smallest value found is returned.

### Expected

Input:

```text
8 3 15 20 1 7 9 10 5 4
```

Output:

```text
Smallest Integer: 1
Position: 4
```
Example:

```cpp
#include <iostream> // std::cout
#include <array>    // std::array<T, N>

void lowest_number(const std::array<int, 10>& arr) {
  // your implementation goes here

	std::cout << "Smallest Integer: " << smallest << '\n';
	std::cout << "Position: " << position << '\n';
}

int lowest_number(const std::array<int, 10>& arr, int& outPosition) {
  // or you can use this one, both are ok
}

int main() {
  std::array<int, 10> myArray{8, 3, 15, 20, 1, 7, 9, 10, 5, 4};

	lowest_number(myArray);

	int position{};
	int number{ lowest_number(myArray, position } };

	std::cout << "Smallest Integer: " << number << '\n';
	std::cout << "Position: " << position << '\n';
  
  return 0;
}
```

It doesn't matter how you approach the solution as long you solve the challenge.

----------

## 2. Bubble Sort

### Objective

Sorting a list of numbers in ascending order.

### How it works

Bubble Sort performs multiple passes through the list.

In each pass:

1. Compares adjacent elements.
2. If they are out of order, performs a swap.
3. The largest element "floats" to the end of the list.
4. The process repeats until no more swaps are needed.

### Expected

Input:

```text
5 3 8 1 2
```

Output:

```text
1 2 3 5 8
```

#### Code Setup

Use this setup to get started:

```cpp
#include <iostream> // std::cout
#include <array>    // std::array<T, N>

namespace Sort {
	void bubble_sort(std::array<int, 5>& arr) {
		// your implementation goes here
	}
};

int main() {
	std::array<int, 5> myArray{ 5, 3, 8, 1, 2 };

	Sort::bubble_sort(myArray);

	std::cout << "myArray = [";
	for (int number : myArray) {
		std::cout << number << ", ";
	}
	std::cout << "]\n";

	return 0;
}
```

### What to observe:

- Number of comparisons
- Number of swaps
- Behavior in already sorted lists
    
----------

## 3. Quick Sort

### Objective

Sorting a list of numbers in ascending order.

### How it works

Quick Sort uses the "divide and conquer" strategy.

General steps:

1. Choose a pivot.
2. Separate the smaller elements of the pivot.
3. Separate the larger elements of the pivot.
4. Repeat the process recursively for each side.

In the end, all subsets will be sorted.

### Example

Input:

```text
3 9 5 1 4 8 2
```

Output:

```text
1 2 3 4 5 8 9
```

#### Code setup

Use this setup to get started:

```cpp
#include <iostream> // std::cout
#include <array>    // std::array<T, N>

namespace Sort {
	void quick_sort(std::array<int, 5>& myArray) {
		// your implementation goes here
	}
};

int main() {
	std::array<int, 5> myArray{ 3, 9, 5, 1, 4, 8, 2 };

	Sort::quick_sort(myArray);

	std::cout << "myArray = [";
	for (int number : myArray) {
		std::cout << number << ", ";
	}
	std::cout << "]\n";

	return 0;
}
```

### What to observe:

- Choice of pivot
- List partitioning
- Use of recursion
- Performance differences compared to Bubble Sort

----------

# Bonus Algorithms

Each correctly completed bonus algorithm awards additional points.

Bonus challenges does not contain extensive information as the previous exercises

----------

## Selection Sort

###  Concept

Iterates through the list looking for the smallest remaining element.

After finding it:

- Move the element to its correct position
- Repeat the process for the rest of the list

#### Tip

Consider what would happen if you divided the list into two regions:

One region already sorted
One region not yet sorted

In each iteration, find the smallest element in the unsorted region and move it to the next free position in the sorted region.

Do you really need to swap elements multiple times or just once per pass?

----------

## Insertion Sort

### Concept

Gradually builds an ordered region of the list.

At each step:

- An element is removed from the unordered region.
- An element is inserted in the correct position within the ordered region.

#### Tip

Imagine arranging playing cards in your hand.
You start with a small, ordered region and, for each new element, you search for the correct position where it should be inserted.

What should happen to the larger elements while you try to insert a new value in the correct position?
    
----------

## Merge Sort

### Concept

Use the divide and conquer strategy.

1. Divide the list into two parts.
2. Sort each part separately.
3. Merge the sorted lists.

#### Tip

The problem might seem difficult when the list is large.
But what if the list had only one element?
What if you could break a large list into several smaller lists until you reached that point?
Then think about how to merge two lists that are already sorted.

How to combine two sorted lists without losing the order?

----------

## Radix Sort

### Concept

Order the numbers by analyzing their digits.

Typically:

1. Units
2. Tens
3. Hundreds
4. Thousands

The ordering occurs gradually for each decimal place.

#### Tip

Unlike previous algorithms, this one doesn't primarily rely on comparisons between numbers.
Observe the digits of the numbers individually.
Start with the least significant digit and gradually move towards the most significant ones.

How could you group numbers that have the same digit in a given position?

----------

## Binary Search

### Concept

Performs efficient searches in ordered lists.

General steps:

1. Find the central element.
2. Compare it to the searched value.
3. Discard half of the list.
4. Repeat until the element is found or the search is exhausted.

----------
