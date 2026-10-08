//#include <stdio.h>
//
//int main()
//{
//    int stack[5];
//    int top = -1;
//    int value;
//
//    printf("Enter value: ");
//    scanf("%d", &value);
//
//    if (top == 4)
//    {
//        printf("Stack Overflow");
//    }
//    else
//    {
//        top++;
//        stack[top] = value;
//
//        printf("Value pushed: %d", stack[top]);
//    }
//
//    return 0;
//}






// for push in stack-----------------------------------------------------------------------------------------



//#include <stdio.h>
//
//#define MAX 6
//
//int stack[MAX];
//int top = -1;
//
//void push(int x)
//{
//    if (top == MAX - 1)
//    {
//        printf("Stack is overflow\n");
//        return;
//    }
//
//    stack[++top] = x;
//
//    printf("The element %d is pushed in stack\n", x);
//}
//
//int main()
//{
//    push(10);
//    push(20);
//    push(30);
//
//    return 0;
//}



// pop in stack-----------------------------------------------------------------------
// POP in Stack

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
