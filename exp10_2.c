#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct node {
    int data;
    struct node *next;
};

// Function to display list
void display(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head, *temp, *newnode;
    int pos, i = 1, value;

    // Create initial list
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    temp = head;
    temp->next = (struct node *)malloc(sizeof(struct node));
    temp = temp->next;
    temp->data = 20;
    temp->next = (struct node *)malloc(sizeof(struct node));
    temp = temp->next;
    temp->data = 30;
    temp->next = NULL;

    printf("Original List:\n");
    display(head);

    // Insert in middle
    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    temp = head;
    while (i < pos - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Updated List:\n");
    display(head);

    return 0;
}
