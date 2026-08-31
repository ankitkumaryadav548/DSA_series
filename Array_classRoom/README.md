# Array Operations (Classroom Practice)

Building array operations from scratch without standard library methods to understand manual index shifting and memory management.

## Operations Implemented

### Insertion
* `insertAtBegining.cpp` - Insert at index 0 (shifts elements right, $O(N)$).
* `insertAtlast.cpp` - Insert at the end ($O(1)$).
* `insertAtAnyIndex.cpp` - Insert at a specific index (shifts elements right, $O(N)$).

### Deletion
* `deleteAtBegining.cpp` - Remove index 0 (shifts elements left, $O(N)$).
* `deleteAtLast.cpp` - Remove last element ($O(1)$).
* `deleteAtAnyIndex.cpp` - Remove from a given index (shifts elements left, $O(N)$).

### Searching & Sorting
* `linearSearch.cpp` - Sequential scan ($O(N)$).
* `binarySearch.cpp` - Binary search on a sorted array ($O(\log N)$).
* `bubbleSort.cpp` - Swapping adjacent elements ($O(N^2)$).

## Compile & Run
```bash
g++ Array_classRoom/insertAtAnyIndex.cpp -o insert
./insert
```
