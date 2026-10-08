#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode;

    int i;

    for (i = 1; i <= 10; i++) {

        newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->data = i;
        newNode->prev = NULL;
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        }
        else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = 100;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
   
   
    printf("Doubly Linked List:\n");

    temp = head;

    while (temp != NULL) {
        printf("%d <=> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
    return 0;
}
