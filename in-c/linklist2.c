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

    temp = head;

    if (pos == 1)
    {
        head = head->next;
        free(temp);
        return;
    }

    for (i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
}

int main()
{
    struct node *a, *b, *c;

    a = malloc(sizeof(struct node));
    b = malloc(sizeof(struct node));
    c = malloc(sizeof(struct node));

    a->data = 10;
    b->data = 20;
    c->data = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    head = a;

    deletePosition(2);

    printf("List after deletion: ");

    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }

    return 0;
}
