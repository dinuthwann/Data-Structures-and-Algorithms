#include<stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;

int isFull(){
        return (top == MAX -1);
}
int isEmpty(){
        return (top == -1);
}
void push(char val){
        if(isFull()){
                printf("\nstack is full");
        }else{
                stack[top++]= val;
        }
}
char pop(){
        if(isEmpty()){
                printf("stack is empty\n");
                return '\0';
        }else{
                char val = stack [top--];
                return val;
        }
}
char peek(){
         if(isEmpty()){
                 return '\0';
         }
         return stack[top];
}

int main(){
        int choice;
        char val;
        while(1){
                printf("1. Push\n");
                printf("2. Pop \n");
                printf("3. Peek\n");
                printf("4. Exit\n");
                scanf("%d", &choice);

                switch (choice) {
                        case 1:
                                printf("Enter a character: ");
                                scanf(" %c", &val);
                                push(val);
                                break;
                        case 2:
                                val = pop();
                                if (val != '\0') {
                                        printf("Popped character: %c\n", val);
                                }
                                break;
                        case 3:
                                val = peek();
                                if (val != '\0') {
                                        printf("Top character: %c\n", val);
                                }
                                break;
                        case 4:
                                printf("Exiting program \n");
                                return 0;
                        default:
                                printf("Error\n");
                }
        }
        return 0;
}