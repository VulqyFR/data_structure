#include <stdio.h>
#include <stdlib.h>
#include "node.h"

#define MAX_SIZE 100

void reverseLevelOrder(Node *root)
{
    if (root == NULL)
        return;

    Node *queue[MAX_SIZE];
    int queue_front = 0, queue_rear = 0;

    int stack[MAX_SIZE];
    int stack_top = -1;

    queue[queue_rear++] = root;

    while (queue_front < queue_rear)
    {
        Node *current = queue[queue_front++];

        stack[++stack_top] = current->data;

        if (current->right)
            queue[queue_rear++] = current->right;
        if (current->left)
            queue[queue_rear++] = current->left;
    }

    while (stack_top >= 0)
    {
        printf("%d ", stack[stack_top--]);
    }
}