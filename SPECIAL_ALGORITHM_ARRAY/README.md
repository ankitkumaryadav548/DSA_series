# Special Array Algorithms

Optimization techniques using **Prefix Sum** and **Sliding Window** patterns.

## Files

### `PREFIX_SUM/`
* `prefixSum.cpp` - Building running prefix sum array for $O(1)$ range sum lookups.
* `partitionOfArray.cpp` - Checking if an array can be split into two equal-sum halves.

### `SLIDING_WINDOW/`
* `maximumSumSubarrayOfSizek.cpp` - Max sum contiguous subarray of fixed size $K$.
* `1stNegativeIneveryWindowSIzeK.cpp` - First negative integer in every window of size $K$.
* `grumpy_Owner1052.cpp` - Grumpy Bookstore Owner problem (LeetCode 1052).

## Code Snippets

### Prefix Sum
```cpp
prefix[0] = arr[0];
for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
}
// Sum from L to R:
int rangeSum = (L == 0) ? prefix[R] : (prefix[R] - prefix[L - 1]);
```

### Sliding Window (Fixed size K)
```cpp
int windowSum = 0;
for (int i = 0; i < k; i++) windowSum += arr[i];

int maxSum = windowSum;
for (int i = k; i < n; i++) {
    windowSum += arr[i] - arr[i - k];
    maxSum = max(maxSum, windowSum);
}
```

## Compile & Run
```bash
g++ SPECIAL_ALGORITHM_ARRAY/SLIDING_WINDOW/maximumSumSubarrayOfSizek.cpp -o window
./window
```
