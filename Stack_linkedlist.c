// stack (Linked list)
#include <stdio.h>
#include <stdlib.h>

//describe the node structure
struct Node {
    int data;
    struct Node* next;
};
struct Node* top = NULL;

void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow! \n");
        return;
    }
    newNode->data = value;    // add the data
    newNode->next = top;      // link the old top node
    top = newNode;            // Making the new node the top
    printf("%d add to the Stack (Pushed).\n", value);
}
void pop() {
    // Verify if the stack is empty
    if (top == NULL) {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }
    
    struct Node* temp = top;        // Storing the removed node
    printf("%d Removed from the stack (Popped).\n", top->data);
    
    top = top->next;                // Moving the top pointer to the next node
    free(temp);                     // Deallocating the memory
}
void peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        printf("The top value(Peek): %d\n", top->data);
    }
}
int main() {
    // add the data (Push)
    push(10);
    push(20);
    push(30);

    printf("\n");
    peek(); // Viewing the top value

    printf("\n");
    pop();  // Deleting 30
    peek(); // Checking the top value (should be 20)
    return 0;
}