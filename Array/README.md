# 1D Arrays & Vectors

C++ array operations, standard vectors (`std::vector`), pointer arithmetic, and two-pointer array algorithms.

## Folder Structure

### `Lecture1/` - Array Basics
* `memoryAllocation.cpp` - Array storage in contiguous memory.
* `size.cpp` - Getting array size using `sizeof()`.
* `linearSearch.cpp` - Sequential search for an element.
* `maximumElementOfArray.cpp` / `minimumElement.cpp` - Finding max and min values.
* `sumOfelement.cpp` / `productOfelement.cpp` - Array element sum and product.
* `basicQuestion.cpp` - Practice problems.

### `Lecture2/` - Pointers & Vectors
* `pointerANDarray.cpp` - Array degradation to pointers and pointer movement.
* `passingArrayTofunction.cpp` - Passing arrays into functions.
* `lastindex.cpp` - Finding the last index of a target element.
* `Practise/largestElement.cpp` - Largest and second largest element logic.

#### `Lecture2/VECTOR/`
* `vectorbasics.cpp` - Vector syntax vs standard static arrays.
* `capacityOFvector.cpp` - Capacity growth doubling strategy.
* `opertionsONVector.cpp` - `push_back()`, `pop_back()`, `size()`, `capacity()`.
* `vectorInput.cpp` / `vectorWITHsize.cpp` - Input taking and size initialization.
* `passingvectortoFunction.cpp` - Passing vectors by value vs by reference (`&`).
* `lastindexfind.cpp` - Finding last occurrence index.
* `doubletofnumber.cpp` - Finding pairs that sum up to a target value.
* `reverseArray.cpp` / `reverseByPartwise.cpp` - Reversing an array or sub-range.
* `rotateArray.cpp` - Rotating an array by $k$ steps.
* `vectorAtSort.cpp` - Sorting vectors with `std::sort()`.

### `Lecture3/` - Two-Pointer Algorithms
* `sortZeroesAndOnes.cpp` - Sorting 0s and 1s using two pointers ($O(N)$).
* `sortzeroesOnesAndTwoes.cpp` - Dutch National Flag algorithm (sort 0s, 1s, 2s).
* `sortpositiveAndnegativenumber.cpp` - Separating positive and negative numbers.
* `mergeTwoSortedArray.cpp` - Merging two sorted arrays in $O(M + N)$.

## Compile & Run
```bash
g++ Array/Lecture3/sortzeroesOnesAndTwoes.cpp -o dnf
./dnf
```
