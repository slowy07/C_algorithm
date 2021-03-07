#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *leftNode;
    int data;
    struct node *rightNode;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->leftNode = NULL;
    node->data = data;
    node->rightNode = NULL;

    return node;
}

int main(void)
{
    /* new node can be created here as :-
       struct node *nameOfNode = newNode(data);
       and tree can be formed by creating further nodes at
       nameOfNode->leftNode and so on.
    */

    return 0;
}