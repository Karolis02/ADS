#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

typedef struct node
{
    int val;
    struct node *next;
}node;

typedef struct Stack
{
    node *head;
}Stack;

void create(Stack *ptr);
void push(int value, Stack *ptr);
void pop(Stack *ptr);
void display(Stack *ptr);
void isEmpty(Stack *ptr);
void deleteStack(Stack *ptr);

#endif
