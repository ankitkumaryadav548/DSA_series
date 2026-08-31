# Binary Search

Binary search problems ranging from basic search to search bounds and rotated array problems.

## Files

### `Lecture1/` - Basic Search & Bounds
* `binary_searchCode.cpp` - Standard binary search implementation ($O(\log N)$).
* `lowerBound.cpp` - First index where `arr[i] >= target`.
* `upperBound.cpp` - First index where `arr[i] > target`.
* `firstOccurance.cpp` - Finding the first index of a duplicate target.
* `findingSmallestMissingNumber.cpp` - Finding the smallest missing number in a sorted array.

### `Lecture2/` - Search Space Problems
* `searchInRotatedArray.cpp` - Search target in a rotated sorted array.
* `peakIndexInMountainArray.cpp` - Find peak index in a mountain array.
* `KclosestElement.cpp` - Find $k$ closest elements to target $x$.

### `Lecture3/`
* `notes.txt` - Notes on overflow prevention (`low + (high - low) / 2`) and search spaces.

## Key Logic
Binary search requires a sorted space:
```cpp
int low = 0, high = n - 1;
while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) low = mid + 1;
    else high = mid - 1;
}
return -1;
```

## Compile & Run
```bash
g++ BINARY_SEARCH/Lecture2/searchInRotatedArray.cpp -o rotated
./rotated
```
