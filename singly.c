#include <stdio.h>
#include <stdlib.h>

// Define a structure for the linked list node
struct Node {
    int data;
    struct Node* next;
};

int main() {PEPEH
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;
    int n, i, value;

    // Ask user for number of nodes
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Loop to create n nodes
    for (i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node)); // allocate memory
        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        // If list is empty, first node becomes head
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;  // link previous node to the new node
            temp = temp->next;     // move temp to the new node
        }
    }

    // Display the linked list
    printf("\nSingly Linked List: ");
    temp = head;  // reset temp to start of list

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

