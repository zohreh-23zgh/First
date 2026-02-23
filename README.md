# AVL Tree Implementation

This repository contains a C++ implementation of an **AVL Tree** data structure.

## Overview

An AVL Tree is a self-balancing binary search tree where the heights of the two child subtrees of any node differ by at most one. This ensures that the tree remains balanced, providing efficient operations.

## Features

- **Node Structure**: Each node contains:
  - `data`: The value stored in the node (short integer)
  - `Rch`: Pointer to the right child
  - `Lch`: Pointer to the left child
  - `B`: Balance factor

- **Tree Class**: Implements the main AVL Tree operations:
  - `insertleaf(int x)`: Insert a new node with value x into the tree
  - `search(int key)`: Search for a node with the given key value
  - `del(int d)`: Delete a node with the given value from the tree

## Operations

### Insert (`insertleaf`)
- Inserts a new leaf node into the tree
- Updates the balance factor as it traverses
- Maintains binary search tree property

### Search (`search`)
- Searches for a node with a specific key
- Displays "find" if the node is found (along with its balance factor)
- Displays "no find" if the node is not found

### Delete (`del`)
- Deletes a node with a specific value
- Handles three cases:
  - Node is a leaf (no children)
  - Node has one child
  - Node has two children (uses in-order successor)

## Example Usage

```cpp
Tree x;
x.insertleaf(50);
x.insertleaf(75);
x.insertleaf(25);
x.search(10);  // Search for value 10
x.del(20);     // Delete value 20
```

## Language
- **C++**