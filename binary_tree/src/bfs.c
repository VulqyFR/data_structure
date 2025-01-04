#include <stdio.h>
#include "node.h"

void bfs(Node **root)
{
    Node *queue[8];
    int front = 0, rear = 0;
    queue[rear++] = *root;
    int nodeCount = 1;
    while (front < rear)
    {
        nodeCount = rear - front;
        while (nodeCount > 0)
        {
            Node *node = queue[front++];
            printf("%d ", node->data);
            if (node->left)
            {
                queue[rear++] = node->left;
            }
            if (node->right)
            {
                queue[rear++] = node->right;
            }
            nodeCount--;
        }
        printf("\n");
    }
}