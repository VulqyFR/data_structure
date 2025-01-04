#ifndef TRAVERSAL_H
#define TRAVERSAL_H

#include "node.h"

void bfs(Node **root);
void inorder(Node *root);
void preorder(Node *root);
void postorder(Node *root);
void reverseLevelOrder(Node *root);

#endif