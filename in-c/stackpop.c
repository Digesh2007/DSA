#include <stdio.h>

#define MAX 6

int stack[MAX];
int top = -1;

void push(int x)
{
    if (top == MAX - 1)
    {
        printf("Stack is overflow\n");
        return;
    }

    stack[++top] = x;

    printf("The element %d is pushed in stack\n", x);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is underflow\n");
        return;
    }

    printf("The element %d is popped from stack\n", stack[top]);

    top--;
}

int main()
{
    push(30);
    push(20);
    push(10);

    pop();

    return 0;
}

