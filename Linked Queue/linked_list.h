#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct List
{
    struct Node *front;
    struct Node *last;
    int size;
};


void enqueue(struct List *list, struct Node *data)
{
    printf("enqueue start\n");
    if (list -> last == NULL)
    {
        list -> front = list -> last = data;
        list -> size++;
        printf("enqueue done\n");
        return;
    }
    //struct Node *temp = (struct Node*) malloc(sizeof(*temp));
    list -> last -> next = data;
    list -> last  = data;
    list -> size++;
    printf("enqueue done\n");

}

struct Node* dequeue(struct List *list)
{
    if (list -> size == 0)
    {
        printf("The list is empty");
        return NULL;
    }
    struct Node *temp;
    temp = list -> front;
    list -> front = list -> front -> next;
    if (list->front == NULL) 
        list->last = NULL; 

    list -> size--;

    return temp;
}

int getSize(struct List val)
{
    return val.size;
}

void printLinkedList(struct List *list)
{
    printf("print start\n");
    struct Node *temp;
    temp = list -> front;
    while (temp != NULL)
    {
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }
    printf("print done\n");

}
