#include<stdio.h>

#define MAX 100
int st[MAX];
int top = -1;

int isEmpty() {
    if (top == -1) {
        return 1;
    }else{
        return 0;
    }
}
int isFull() {
    if (top == MAX - 1) {
        return 1; 
    } else {
        return 0; 
    }
}
