#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
struct node* insert_beg(struct node *head, int val);
struct node* insert_end(struct node *head, int val);
void display(struct node *head);

/* First we create a node with two parts: data part and the pointer part */
struct node 
{
    int data;
    struct node *next; // This struct is used to point to the next node
};

struct node *head = NULL; // head is not a data part, it points to the first node of the linked list

/* Inserting the node at the beginning */
struct node* insert_beg(struct node *head, int val) {
    struct node *first_node;
    printf("\nEnter the data: ");
    scanf("%d", &val);
    
    first_node = (struct node*)malloc(sizeof(struct node));
    first_node->data = val;
    first_node->next = head; // Point the new node to the current head
    head = first_node;       // Make the new node as the head
    
    return head;
}

/* Inserting the node at the end */
struct node* insert_end(struct node *head, int val) {
    struct node *ptr, *first_node;
    printf("\nEnter the data: ");
    scanf("%d", &val);
    
    first_node = (struct node*)malloc(sizeof(struct node));
    first_node->data = val;
    first_node->next = NULL;
    
    // If the linked list is empty
    if (head == NULL) {
        head = first_node;
        return head;
    }
    
    ptr = head;
    // Traverse until the last node
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = first_node; // Link the last node to the new node
    
    return head;
}

/* Display the linked list */
void display(struct node *head) {
    struct node *ptr;
    ptr = head;
    printf("\nLinked List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

/* Main function to test the program */
int main() {
    int choice, val = 0;

    while (1) {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = insert_beg(head, val);
                break;
            case 2:
                head = insert_end(head, val);
                break;
            case 3:
                display(head);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}