#include<stdio.h>
#define MAX 10

int st[MAX];
int top =-1;

void push(int val) {
    if (top == MAX - 1) {
        printf("\n Stack Overflow!");
    } else {
        top++;
        st[top] = val;
    }
}

int pop() {
    int val;
    if (top == -1) {
        printf("\n Stack Underflow!");
        return -1;
    } else {
        val = st[top];
        top--;
        return val;
    }
}

int main() {
    push(30);
    push(80);
    push(100);
    push(25);
    
    printf("Items inserted into the stack successfully.\n");
    printf("\nDeleted items from the stack:\n");

    while (top != -1) {
        int deleted_val = pop();
        printf("%d\n", deleted_val);
    }
    
    return 0;
}

