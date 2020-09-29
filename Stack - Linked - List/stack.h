#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Stack
{
    struct Node *top;
    struct Node *curr;
    int size;
};

void push(struct Stack *stack, struct Node *data)
{
    if (stack -> size == 0)
    {
        stack -> top = stack -> curr = data;
        stack -> size++;
        return;
    }
    stack -> curr -> next = data;
    stack -> curr = data;
    stack -> size++;
}

struct Node pop(struct Stack *stack)
{
    if (stack -> size == 0)
    {
        printf("Stack is empty");
        return;
    }
    struct Node *temp = stack -> top;
    stack -> top = stack ->top->next;
    stack -> size--;

    return *temp;
}