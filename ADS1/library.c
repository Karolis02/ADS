#include <stdio.h>
#include <stdlib.h>
#include "library.h"

///Creates an empty stack
void create(Stack *ptr)
{
    ptr->head = NULL;
}

void push(int value, Stack *ptr)
{

    node* ptr1 =(struct node *)malloc(sizeof(struct node));
    if (ptr->head == NULL)
    {
        ptr1->next = NULL;
        ptr1->val = value;
        ptr->head = ptr1;
    }
    else
    {
        ptr1->next = ptr->head;
        ptr1->val = value;
        ptr->head = ptr1;
    }
}

void pop(Stack *ptr)
{
    int item;
    node* ptr1;
    if (ptr->head == NULL)
    {
        printf("Stack is empty. Cannot pop\n");
        return;
    }
    else
    {
        item = ptr->head->val;
        ptr1 = ptr->head;
        ptr->head = ptr->head->next;
        printf("Popped value : %d\n", item);
        free(ptr1);
    }
}

void display(Stack *ptr)
{
    node* ptr1;
    ptr1 = ptr->head;
    printf("Stack elements: \n");
    if (ptr1 == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    while(ptr1 != NULL)
    {
        printf("%d\n", ptr1->val);
        ptr1 = ptr1->next;
    }

}

void isEmpty(Stack *ptr)
{

    if(ptr->head == NULL)
    {
        printf("Stack is empty\n");
    }

    else
    {
        printf("Stack is not empty\n");
    }
}

void deleteStack(Stack *ptr)
{
    node* ptr1;
    while (ptr->head != NULL)
    {
        ptr1 = ptr->head;
        ptr->head = ptr->head->next;
        free(ptr1);
    }

    printf("All stack elements are deleted\n");
}
