#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void deletePosition(int pos)
{
    struct node *temp, *prev;
    int i;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    /* Delete first node */
    if (pos == 1)
    {
        temp = head;
        head = head->next;
        free(temp);
        return;
    }

    temp = head;

    for (i = 1; i < pos; i++)
    {
        if (temp == NULL)
        {
            printf("Invalid position\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

int main()
{
    struct node *n1, *n2, *n3;

    n1 = (struct node *)malloc(sizeof(struct node));
    n2 = (struct node *)malloc(sizeof(struct node));
    n3 = (struct node *)malloc(sizeof(struct node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head = n1;

    printf("Deleting node at position 2...\n");

    deletePosition(2);

    printf("Remaining list: ");

    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }

    return 0;
}
