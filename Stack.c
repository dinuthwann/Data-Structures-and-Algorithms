#include<stdio.h>
#define MAX 100

int st[MAX];
int top = -1;

void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main(int argc,char *argv[]){
    int val,option;

    do{
        printf("\n ** Main menu **");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
        printf("\n Enter your option:");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("\n Enter the number to be pushed on stack: ");
            scanf("%d",&val);
            push(st,val);
            break;
        case 2:
            val = pop(st);
            if(val != -1);
            printf("\n The value deleted from stack is : %d",val);
            break;
        case 3:
            val = peek(st);
            if(val != -1);
            printf("\n The value stored at top of stack is :%d",val);
            break;
        case 4:
            display(st);
            break;
            
        }
    }while(option != 5);
    return 0;

}
void push(int st[], int val) {
    if (top == MAX - 1) {
        printf("\n OVERFLOW: Stack is full!");
    } else {
        top++;
        st[top] = val;
        printf("\n Successfully pushed %d", val);
    }
}
int pop(int st[]) {
    int val;
    if (top == -1) {
        printf("\n UNDERFLOW: Stack is empty!");
        return -1;
    } else {
        val = st[top];
        top--;
        return val;
    }
}
int peek(int st[]) {
    if (top == -1) {
        printf("\n Stack is empty!");
        return -1;
    } else {
        return st[top];
    }
}
void display(int st[]) {
    int i;
    if (top == -1) {
        printf("\n Stack is empty!");
    } else {
        printf("\n Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf(" %d\n", st[i]);
        }
    }
}