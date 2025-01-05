@echo off
echo Compiling binary tree implementation...

REM Compile binary tree implementation
gcc -c -I./binary_tree/include main.c
gcc -c -I./binary_tree/include binary_tree/src/node.c
gcc -c -I./binary_tree/include binary_tree/src/bfs.c
gcc -c -I./binary_tree/include binary_tree/src/inorder.c
gcc -c -I./binary_tree/include binary_tree/src/preorder.c
gcc -c -I./binary_tree/include binary_tree/src/postorder.c
gcc -c -I./binary_tree/include binary_tree/src/reverse_level_order.c

REM Compile N-ary tree implementation
gcc -c -I./nary_tree/include nary_tree/src/nary_tree.c

gcc *.o -o tree_exploration.exe

REM Link object files
gcc *.o -o tree_exploration.exe

REM Clean up object files
del *.o

echo Compilation successful!