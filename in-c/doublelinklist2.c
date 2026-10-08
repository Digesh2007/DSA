//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node {
//    int data;
//    struct Node *prev;
//    struct Node *next;
//};
//
//int main() {
//    struct Node *head = NULL;
//    struct Node *temp = NULL;
//    struct Node *newNode;
//
//    int i;
//
//    for (i = 1; i <= 10; i++) {
//
//        newNode = (struct Node *)malloc(sizeof(struct Node));
//
//        newNode->data = i;
//        newNode->prev = NULL;
//        newNode->next = NULL;
//
//        if (head == NULL) {
//            head = newNode;
//            temp = newNode;
//        }
//        else {
//            temp->next = newNode;
//            newNode->prev = temp;
//            temp = newNode;
//        }
//    }
//    printf("Doubly Linked List:\n");
//
//    temp = head;
//
//    while (temp != NULL) {
//        printf("%d <=> ", temp->data);
//        temp = temp->next;
//    }
//
//    printf("NULL\n");
//
//
//    newNode = (struct Node *)malloc(sizeof(struct Node));
//
//    newNode->data = 11;
//
//    temp = head;
//
//    while (temp->next != NULL) {
//        temp = temp->next;
//    }
//
//    newNode->next = NULL;
//    newNode->prev = temp;
//    temp->next = newNode;
//
//    printf("Doubly Linked List after insert at the end:\n");
//
//    temp = head;
//
//    while (temp != NULL) {
//        printf("%d <=> ", temp->data);
//        temp = temp->next;
//    }
//
//    printf("NULL\n");
//
//    return 0;
//}






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
    int position = 3;

    // Create 10 nodes
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

    // Display original list
    printf("Doubly Linked List:\n");

    temp = head;

    while (temp != NULL) {
        printf("%d <=> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    // Create new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = 99;

    // Move temp to the node before the position
    temp = head;

    for (i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    // Insert new node at position
    newNode->next = temp->next;
    newNode->prev = temp;

    temp->next->prev = newNode;
    temp->next = newNode;

    printf("\n");

    // Display list after insertion
    printf("Doubly Linked List after insertion:\n");

    temp = head;

    while (temp != NULL) {
        printf("%d <=> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
