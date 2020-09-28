#include "linked_list.h"

int main()
{
    struct Node *node1 = (struct Node*) malloc(sizeof(*node1));
    node1 -> data = 1;

    struct Node *node2 = (struct Node*) malloc(sizeof(*node2));
    node2 -> data = 2;

    struct List *list  = (struct List*) malloc(sizeof(*list));;
    enqueue(list, node1);
    enqueue(list, node2);

    printLinkedList(list);

}