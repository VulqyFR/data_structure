#ifndef NARY_TREE_H
#define NARY_TREE_H

typedef struct NaryNode
{
    int data;
    struct NaryNode **children;
    int childCount;
    int maxChildren;
} NaryNode;

NaryNode *createNaryNode(int data, int maxChildren);
void addChild(NaryNode *parent, NaryNode *child);
void printNaryTree(NaryNode *root, int level);
void levelOrderNary(NaryNode *root);

#endif