# Linked List

Basic singly linked list node structure, memory allocation with pointers, and traversals in C++.

## Files

### `Lecture1/`
* `basic.cpp` - Creating a `Node` class/struct, linking nodes, head pointer, and iterating through a linked list.

## Node Structure
```cpp
class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = nullptr;
    }
};
```

## Quick Comparison
* **Array**: Contiguous memory, $O(1)$ random access, $O(N)$ insertion at head.
* **Linked List**: Dynamic memory nodes, $O(N)$ access, $O(1)$ insertion at head.

## Compile & Run
```bash
g++ LinkedList/Lecture1/basic.cpp -o ll
./ll
```
