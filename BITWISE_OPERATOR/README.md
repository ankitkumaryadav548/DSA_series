# Bitwise Operations

Bit manipulation, binary representation, and base conversions in C++.

## Files
* `binaryTodecimal.cpp` - Converts a binary number string/integer into decimal format.

## Quick Bitwise Reference
* **AND (`&`)**: `1 & 1 = 1`, otherwise `0`.
* **OR (`|`)**: `0 | 0 = 0`, otherwise `1`.
* **XOR (`^`)**: `1 ^ 1 = 0`, `0 ^ 0 = 0`, different bits give `1`.
* **Left Shift (`<<`)**: `x << k` multiplies $x$ by $2^k$.
* **Right Shift (`>>`)**: `x >> k` divides $x$ by $2^k$.

## Compile & Run
```bash
g++ BITWISE_OPERATOR/binaryTodecimal.cpp -o bin2dec
./bin2dec
```
