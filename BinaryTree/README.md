# Binary Tree & Binary Search Tree (BST)

Binary tree implementation, traversals (BFS & DFS), and Binary Search Tree node insertion.

## Files
* `tree_node.cpp` - `Node` structure definition and creating nodes using pointers.
* `bfs_traversal.cpp` - Breadth-First Search (Level Order Traversal) using a queue.
* `dfs_traversal.cpp` - Preorder, Inorder, and Postorder recursive traversals.
* `insertionOfNodeInBST.cpp` - Inserting nodes into a BST while keeping $Left < Node < Right$.

## Node Definition
```cpp
struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int data) {
        val = data;
        left = nullptr;
        right = nullptr;
    }
};
```

## Traversal Types
* **Preorder**: Root $\rightarrow$ Left $\rightarrow$ Right
* **Inorder**: Left $\rightarrow$ Root $\rightarrow$ Right *(prints BST elements in sorted order)*
* **Postorder**: Left $\rightarrow$ Right $\rightarrow$ Root

## Compile & Run
```bash
g++ BinaryTree/bfs_traversal.cpp -o bfs
./bfs
```
