# Tree Exploration Project

## Project Description

This project is an in-depth exploration of various tree data structures and their associated algorithms. Starting with a binary tree, the project aims to implement and analyze every major type of tree, including but not limited to:

-   **Binary Trees**
-   **Binary Search Trees (BST)**
-   **AVL Trees**
-   **Red-Black Trees**
-   **B-Trees**
-   **B+ Trees**
-   **Heap Trees (Max Heap, Min Heap)**
-   **Trie (Prefix Tree)**
-   **Segment Trees**
-   **Fenwick Trees (Binary Indexed Tree)**
-   **General Trees**
-   **N-ary Trees**
-   **K-D Trees**
-   **Suffix Trees**

Each tree type will include implementations of key algorithms, with a focus on traversal techniques, balancing operations, and query optimizations.

---

## Directory Structure

```
tree_exploration/
├── binary_tree/
│   ├── include/
│   │   ├── node.h
│   │   ├── bfs.h
│   │   ├── dfs.h
│   │   └── traversal.h
│   ├── src/
│   │   ├── node.c
│   │   ├── bfs.c
│   │   ├── inorder.c
│   │   ├── preorder.c
│   │   ├── postorder.c
│   │   └── reverse_level_order.c
│   └── main.c
├── avl_tree/
├── red_black_tree/
├── b_tree/
├── b_plus_tree/
├── heap_tree/
├── trie/
├── segment_tree/
├── fenwick_tree/
├── general_tree/
├── n_ary_tree/
├── kd_tree/
├── suffix_tree/
└── main.c
```

### Explanation of Directories and Files

-   Each subdirectory corresponds to a specific tree type.
-   Subdirectories include:
    -   `include/`: Header files defining structures and function prototypes.
    -   `src/`: Implementation files for the tree and its algorithms.
    -   `main.c`: Demonstrates the creation and functionality of the specific tree.

---

## Compilation Instructions

1. Create a `compile.bat` script in the project root with the following content:
    ```bat
    @echo off
    gcc -o tree_exploration binary_tree/src/*.c
    ```
2. Modify `compile.bat` to include other trees as they are implemented.
3. Run the `compile.bat` script to compile the program and generate the executable:
    ```
    compile.bat
    ```
4. The executable file `tree_exploration` will be created in the project root.

---

## Usage Examples

### Run the Compiled Program

1. Execute the compiled program:

    ```
    ./tree_exploration
    ```

2. The program will display the results of different tree traversals and operations for the currently implemented trees.

---

## Clean Up

To remove compiled files, use the `clean` command:

```bat
@echo off
rm -f tree_exploration
```

Place this command in a `clean.bat` file in the project root for convenience.
