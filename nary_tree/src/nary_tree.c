#include <stdio.h>
#include <stdlib.h>
#include "../include/nary_tree.h"

NaryNode *createNaryNode(int data, int maxChildren)
{
    NaryNode *newNode = (NaryNode *)malloc(sizeof(NaryNode));
    newNode->data = data;
    newNode->maxChildren = maxChildren;
    newNode->childCount = 0;
    newNode->children = (NaryNode **)malloc(maxChildren * sizeof(NaryNode *));
    return newNode;
}

void addChild(NaryNode *parent, NaryNode *child)
{
    if (parent->childCount < parent->maxChildren)
    {
        parent->children[parent->childCount++] = child;
    }
}

void printNaryTree(NaryNode *root, int level)
{
    if (root == NULL)
        return;

    for (int i = 0; i < level; i++)
        printf("  ");
    printf("%d\n", root->data);

    for (int i = 0; i < root->childCount; i++)
        printNaryTree(root->children[i], level + 1);
}

void levelOrderNary(NaryNode *root)
{
    if (root == NULL)
        return;

    NaryNode **queue = (NaryNode **)malloc(1000 * sizeof(NaryNode *));
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear)
    {
        NaryNode *current = queue[front++];
        printf("%d ", current->data);

        for (int i = 0; i < current->childCount; i++)
            queue[rear++] = current->children[i];
    }

    free(queue);
}