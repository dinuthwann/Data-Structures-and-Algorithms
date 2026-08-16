#include<stdio.h>
int main(int argc,char *argv[]){
    int val,option;
    int st[100];
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