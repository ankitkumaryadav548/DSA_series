# Sorting Algorithms

Implementations of sorting algorithms, performance comparisons, and related problem applications.

## Folder Overview

### `bubbleSort/`
* `bubbleSortcode.cpp` - Optimized bubble sort with early exit ($O(N^2)$).
* `checkArraysorterOrznot.cpp` - Checks if an array is already sorted.
* `pushZeroesToEndWhileMaintainingOrder.cpp` - Moving zeroes to the end.
* `sortStringIndec.cpp` - Sorting string characters.

### `selectionANDinsertionSort/`
* `selectionSort.cpp` - Finding minimum element and swapping to front ($O(N^2)$).
* `insertionSort.cpp` - Building sorted array by shifting items ($O(N^2)$).
* `comparationBetweenSorting.cpp` - Comparison notes between sorting methods.

### `MergeSort/`
* `mergingtwoSortedArray.cpp` - Merging two sorted arrays ($O(M+N)$).
* `mergeSort.cpp` - Divide and conquer merge sort ($O(N \log N)$).
* `countInversion.cpp` - Counting inversion pairs using merge sort logic.

### `quickSort/`
* `quickSortAlgo.cpp` - Partitioning quick sort implementation ($O(N \log N)$ average).

### `cycleSort/`
* `cyclicSort.cpp` - Cycle sort for numbers in range $1 \dots N$ ($O(N)$).

### `sortingQuestion/`
* `kRange.cpp` - K-Range problem.
* `replaceWith0ton-1.cpp` - Rank transformation of array elements.

## Summary Table

| Algorithm | Average Time | Space | Stable |
| :--- | :--- | :--- | :--- |
| Bubble Sort | $O(N^2)$ | $O(1)$ | Yes |
| Selection Sort | $O(N^2)$ | $O(1)$ | No |
| Insertion Sort | $O(N^2)$ | $O(1)$ | Yes |
| Merge Sort | $O(N \log N)$ | $O(N)$ | Yes |
| Quick Sort | $O(N \log N)$ | $O(\log N)$ | No |
| Cycle Sort | $O(N)$ | $O(1)$ | No |

## Compile & Run
```bash
g++ SORTING/MergeSort/mergeSort.cpp -o merge
./merge
```
