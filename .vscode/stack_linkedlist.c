#include <stdio.h>
#include <stdlib.h>

// Stack Node structure එක නිර්මාණය කිරීම
struct Node {
    int data;
    struct Node* next;
};

// Stack එකේ උඩම අගය (Top) පෙන්වීමට pointer එකක්
struct Node* top = NULL;

// 1. Push Operation (Stack එකට අගයක් ඇතුළත් කිරීම)
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d Stack එකට එකතු විය (Pushed).\n", value);
}

// 2. Pop Operation (Stack එකේ උඩම අගය ඉවත් කිරීම)
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Stack එක හිස්.\n");
        return;
    }
    struct Node* temp = top;
    printf("%d Stack එකෙන් ඉවත් විය (Popped).\n", top->data);
    top = top->next;
    free(temp); // මතකය නිදහස් කිරීම
}

// 3. Peek Operation (Stack එකේ උඩම අගය ඉවත් නොකර බලාගැනීම)
void peek() {
    if (top == NULL) {
        printf("Stack එක හිස්.\n");
        return;
    }
    printf("Stack එකේ උඩම අගය: %d\n", top->data);
}

// 4. Display Operation (Stack එකේ ඇති සියලුම අගයන් පෙන්වීම)
void display() {
    if (top == NULL) {
        printf("Stack එක හිස්.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack එක: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Stack එක පරීක්ෂා කිරීම
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