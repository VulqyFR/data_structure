#include <stdio.h>
#include <stdlib.h>
#include "binary_tree/include/traversal.h"
#include "binary_tree/include/node.h"

void print_menu()
{
    printf("\nTree Exploration Project\n");
    printf("----------------------\n");
    printf("1. Binary Tree\n");
    printf("2. AVL Tree (Coming soon)\n");
    printf("3. Red-Black Tree (Coming soon)\n");
    printf("4. B-Tree (Coming soon)\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

void binary_tree_demo()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("\nBinary Tree Traversals:\n");
    printf("----------------------\n");
    printf("BFS: \n");
    bfs(&root);
    printf("\n\nDFS:\n");
    printf("Inorder: ");
    inorder(root);
    printf("\nPreorder: ");
    preorder(root);
    printf("\nPostorder: ");
    postorder(root);
    printf("\nReverse Level Order: ");
    reverseLevelOrder(root);
    printf("\n");
}

int main()
{
    int choice;

    do
    {
        print_menu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            binary_tree_demo();
            break;
        case 2:
        case 3:
        case 4:
            printf("\nThis feature is not yet implemented.\n");
            break;
        case 0:
            printf("\nExiting program. Goodbye!\n");
            break;
        default:
            printf("\nInvalid option. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}