# 🌳 Data Structures Exploration Project

## 👀 Overview

A comprehensive implementation of tree data structures in C, featuring various tree types and their algorithms. The project emphasizes clean code, efficient implementations, and practical example

## 📋 Features

### Currently implemented:

-   ✅ Binary Tree with complete traversal algorithms
    -   Breadth-First Search (BFS)
    -   Depth-First Search (DFS)
        -   Inorder
        -   Preorder
        -   Postorder
    -   Reverse Level Order

### Coming soon:

-   ⏳ AVL Tree
-   ⏳ Red-Black Tree
-   ⏳ B-Tree
-   ⏳ B+ Tree
-   ⏳ Heap Tree
-   ⏳ Trie
-   ⏳ Segment Tree
-   ⏳ Fenwick Tree
-   ⏳ N-ary Tree
-   ⏳ K-D Tree
-   ⏳ Suffix Tree

## 🔧 Building the Project

### Prerequisites

-   GCC compiler
-   Windows OS (for .bat script I'll implement a sh script soon)

## 📁 Directory Structure

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

## 💽 Compilation Instructions

1. Start the `compile.bat` script in the project root with the following content:

    ```
    ./compilet.bat
    ```

2. The executable file `tree_exploration` will be created in the project root.

---

## 🚀 Usage Examples

### Run the Compiled Program

1. Execute the compiled program:

    ```
    ./tree_exploration
    ```

2. The program will display the results of different tree traversals and operations for the currently implemented trees.

## 🤝 Contributing

1. Fork the repository
2. Create a new branch
3. Make your changes
4. Submit a pull request

## 📝 License

This project is licensed under the MIT License - see the LICENSE file for details.

## 📫 Contact

For questions or suggestions, please open an issue in the repository.
