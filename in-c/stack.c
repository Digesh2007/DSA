#include <stdio.h>

int stack[5];
int top = -1;

int main()
{
    int choice, value, i;

    while (1)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (top == 4)
                printf("Stack Overflow\n");
            else
            {
                printf("Enter value: ");
                scanf("%d", &value);

                top++;
                stack[top] = value;
            }
        }

        else if (choice == 2)
        {
            if (top == -1)
                printf("Stack Underflow\n");
            else
            {
                printf("Deleted: %d\n", stack[top]);
                top--;
            }
        }

        else if (choice == 3)
        {
            if (top == -1)
                printf("Stack is empty\n");
            else
            {
                for (i = top; i >= 0; i--)
                    printf("%d\n", stack[i]);
            }
        }

        else if (choice == 4)
        {
            break;
        }

        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
