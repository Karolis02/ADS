#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main()
{
    Stack stack;

    create(&stack);
    isEmpty(&stack);
    push(15,&stack);
    push(65,&stack);
    push(99,&stack);
    push(105,&stack);
    display(&stack);
    pop(&stack);
    pop(&stack);
    display(&stack);
    isEmpty(&stack);
    deleteStack(&stack);
    isEmpty(&stack);
    return 0;
}
