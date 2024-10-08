#include <stdio.h>
#include <stdlib.h>

// Define a structure for the linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
void insertEnd(struct Node** head_ref, int new_data) {
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref; // Used to traverse the list

    new_node->data = new_data; // Assign data to new node
    new_node->next = NULL; // This new node is going to be the last node, so make next of it as NULL

    // If the Linked List is empty, then make the new node as head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Otherwise, traverse till the last node
    while (last->next != NULL) {
        last = last->next;
    }

    // Change the next of the last node
    last->next = new_node;
}

// Function to display the linked list in reverse order
void displayReverse(struct Node* node) {
    if (node == NULL) {
        return; // Base case: if node is NULL, return
    }
    displayReverse(node->next); // Recursive call
    printf("%d ", node->data); // Print data after returning from recursion
}

int main() {
    struct Node* head = NULL; // Initialize the head of the linked list
    int n, data;

    // Input the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Input the integers and create the linked list
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insertEnd(&head, data); // Insert each integer into the linked list
    }

    // Display the linked list in reverse order
    printf("The elements in reverse order are:\n");
    displayReverse(head);
    printf("\n");


    return 0;
}
