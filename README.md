# Sorting Algorithms

This repository contains implementations of various sorting algorithms in C.

## Files

- `0-bubble_sort.c`: Implementation of the Bubble Sort algorithm.
- `0-O`: Big O notation for Bubble Sort.
- `1-insertion_sort_list.c`: Implementation of the Insertion Sort algorithm for linked lists.
- `1-O`: Big O notation for Insertion Sort.
- `2-selection_sort.c`: Implementation of the Selection Sort algorithm.
- `2-O`: Big O notation for Selection Sort.
- `3-quick_sort.c`: Implementation of the Quick Sort algorithm.
- `3-O`: Big O notation for Quick Sort.
- `100-shell_sort.c`: Implementation of the Shell Sort algorithm.
- `101-cocktail_sort_list.c`: Implementation of the Cocktail Shaker Sort algorithm for linked lists.
- `101-O`: Big O notation for Cocktail Shaker Sort.
- `102-counting_sort.c`: Implementation of the Counting Sort algorithm.
- `102-O`: Big O notation for Counting Sort.
- `103-merge_sort.c`: Implementation of the Merge Sort algorithm.
- `103-O`: Big O notation for Merge Sort.
- `104-heap_sort.c`: Implementation of the Heap Sort algorithm.
- `104-O`: Big O notation for Heap Sort.
- `105-radix_sort.c`: Implementation of the Radix Sort algorithm.
- `106-bitonic_sort.c`: Implementation of the Bitonic Sort algorithm.
- `106-O`: Big O notation for Bitonic Sort.
- `107-quick_sort_hoare.c`: Implementation of the Quick Sort algorithm using Hoare's partition scheme.
- `107-O`: Big O notation for Quick Sort with Hoare's partition scheme.
- `print_array.c`: Function to print an array.
- `print_list.c`: Function to print a linked list.
- `deck.h`: Header file for functions related to sorting decks.
- `sort.h`: Header file containing function prototypes for sorting algorithms.

## Usage

Each source file contains an implementation of a specific sorting algorithm. To use any of these algorithms, include the corresponding header file (`sort.h` or `deck.h`) in your C program and call the appropriate function.

For example, to use Bubble Sort:

```c
#include "sort.h"

int main(void) {
    int arr[] = {3, 2, 1};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, n);

    bubble_sort(arr, n);

    printf("Sorted array: ");
    print_array(arr, n);

    return 0;
}
```