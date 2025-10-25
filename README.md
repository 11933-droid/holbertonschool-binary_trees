# C - Binary Trees

## Author(s)
- **Ali Hassan Almaghrabi**
- **Yasir Musaad Alshabanah**

---

## Project Overview

This project is part of the **Holberton School Programming curriculum**.  
It focuses on understanding and implementing **binary trees** -  a fundamental data structure used in many algorithms and systems.

You will create and manipulate binary trees, binary search trees (BST), AVL trees, and heaps, and understand the concepts of tree traversal, height, depth, balance, and more.

---

## Environment

- **Language:** C  
- **Compiler:** `gcc` (Ubuntu 20.04 LTS)  
- **Compilation flags:** `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- **Coding style:** Betty (`betty-style.pl` and `betty-doc.pl`)  
- **Editors allowed:** `vi`, `vim`, `emacs`  
- **Operating System:** Ubuntu 20.04 LTS  

---

## Learning Objectives

At the end of this project, you should be able to **explain to anyone**, without the help of Google:

### General
- What is a binary tree
- The difference between a binary tree and a Binary Search Tree (BST)
- The possible time complexity gains of using binary trees compared to linked lists
- The depth, height, and size of a binary tree
- Different traversal methods (pre-order, in-order, post-order)
- What is a complete, full, perfect, and balanced binary tree

---

## Data Structures

All files should include this structure and type definitions:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Aliases for other tree types */
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

