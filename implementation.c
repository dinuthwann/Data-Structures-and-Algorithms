#include <stdio.h>

#define MAX 4

int stack[MAX];
int top =-1;

void push(int st[],int val){
    if(top==MAX-1){
        printf("stack is full ");
    }else
        st[++top]=val;
}
int pop(int st[]){
    int val;
    if(top==-1){
        printf("stack is empty");
        return -1;
    }else
         val = st [top--];
         return val;

}

int peek (int st[]){
    int val;
    if(top == -1){
        printf("stack is empty");
        return 1;
    }else
        return st[top];

}
int isFull(int st[]){
    return(top == MAX -1);
}

int isEmpty(int st[]){
    return (top==-1);
}
void display(int st[]){
    while(!isEmpty(st)){
        printf("%d",pop(st));
    }
}
int main() {
    push(stack, 300);
    push(stack, 25);
    push(stack, 50);
    push(stack, 500);
    
    printf("Peek value: %d\n", peek(stack));
    
    display(stack);
    return 0;
}