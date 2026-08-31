# 2D Arrays & Matrices

Basic matrix operations, 2D arrays, and dynamic 2D vectors in C++.

## Files

### `Lecture1/`
* `declarationof2dArray.cpp` - Basic 2D array syntax and memory layout.
* `input2dArray.cpp` - Taking row and column inputs for a matrix.
* `basicquestion.cpp` - Introductory matrix problems.
* `sumOfelement.cpp` - Sum of all elements in a 2D matrix.
* `productofElement.cpp` - Product of all elements in a 2D matrix.
* `maxIn2dArray.cpp` - Finding the maximum element in a 2D array.
* `minIn2dArray.cpp` - Finding the minimum element in a 2D array.
* `addtionofTwoMatrix.cpp` - Adding two matrices of the same dimensions.
* `transposeOfMatrices.cpp` - In-place matrix transpose ($A[i][j] \leftrightarrow A[j][i]$).
* `storeTransposeOfMatrix.cpp` - Storing matrix transpose in a new matrix.
* `reverseorderprint.cpp` - Reverse and wave printing of matrix elements.
* `2dVector.cpp` - Working with dynamic 2D vectors (`vector<vector<int>>`).

## Notes
* C++ stores 2D arrays in contiguous row-major order.
* Declare a dynamic $R \times C$ vector initialized to 0:
  ```cpp
  vector<vector<int>> grid(R, vector<int>(C, 0));
  ```

## Compile & Run
```bash
g++ 2dArray/Lecture1/transposeOfMatrices.cpp -o transpose
./transpose
```
