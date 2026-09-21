#include <stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;

int isFull() {
    return (top == MAX - 1);
}

int isEmpty() {
    return (top == -1);
}

void push(char val) {
    if (isFull()) {
        printf("Stack is full\n");
    } else {
        top++;
        stack[top] = val;
    }
}

char pop() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return '\0';
    } else {
        char val = stack[top--];
        return val;
    }
}

char peek() {
    if (isEmpty()) {
        return '\0';
    }
    return stack[top];
}

int main() {
    push('I');
    push('N');
    push('U');

    printf("Top element: %c\n", peek());
    printf("Popped elements: ");
    while (!isEmpty()) {
        printf("%c ", pop());
    }
    printf("\n");

    return 0;
}