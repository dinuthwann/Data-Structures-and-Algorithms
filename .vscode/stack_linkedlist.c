#include <stdio.h>
#include <stdlib.h>

// Create the Stack Node structure 
struct Node {
    int data;
    struct Node* next;
};

// Pointer to keep track of the top value of the stack 
struct Node* top = NULL;

// 1. Push Operation (Add an element to the stack)
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d added to the Stack (Pushed).\n", value);
}

// 2. Pop Operation (Remove the top element from the stack)
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("%d removed from Stack (Popped).\n", top->data);
    top = top->next;
    free(temp); // Free up the memory
}

// 3. Peek Operation (View the top element without removing it)
void peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Top value of the Stack: %d\n", top->data);
}

// 4. Display Operation (Print all elements in the stack)
void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Test the Stack operations 
    push(10);
    push(20);
    push(30);

    printf("\n");
    display();

    printf("\n");
    peek();

    printf("\n");
    pop();
    
    printf("\n");
    display();

    return 0;
}