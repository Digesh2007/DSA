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
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("The top element is %d\n", stack[top]);
}


int main()
{
    push(10);
    push(20);
    push(30);
    
    peek();
    pop();
    peek();
    return 0;
}

