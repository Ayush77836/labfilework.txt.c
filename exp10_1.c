#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *second, *third;

    // Allocate memory for nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // Assign data and links
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Traverse and print list
    struct node *temp = head;
    printf("Linked List:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
