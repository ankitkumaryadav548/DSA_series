# Math & Prime Numbers

Prime number checking and basic number theory logic.

## Files
* `primeNumber.cpp` - Optimized primality check running up to $\sqrt{N}$.

## Logic
Instead of checking factors up to $N - 1$, we only check up to $\sqrt{N}$ because factors repeat beyond $\sqrt{N}$:
```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```

## Compile & Run
```bash
g++ primeNumberANDsomeMath/primeNumber.cpp -o prime
./prime
```
