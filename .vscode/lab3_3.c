#include <stdio.h>
#include <string.h>

#define MAX 500

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
        return '\0';
    } else {
        char val = stack[top--];
        return val;
    }
}

// Opening සහ Closing වරහන් දෙක ගැලපෙනවාදැයි බලන function එක
int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '[' && close == ']') return 1;
    if (open == '{' && close == '}') return 1;
    return 0;
}

// Activity 3: Code string එකේ වරහන් balanced ද කියා පරීක්ෂා කිරීම
int checkSyntaxBalance(char code[]) {
    int length = strlen(code);

    for (int i = 0; i < length; i++) {
        // 1. Open වන වරහනක් හමු වූ විට Stack එකට push කරයි
        if (code[i] == '(' || code[i] == '[' || code[i] == '{') {
            push(code[i]);
        }
        // 2. Close වන වරහනක් හමු වූ විට Pop කර සසඳයි
        else if (code[i] == ')' || code[i] == ']' || code[i] == '}') {
            if (isEmpty()) {
                printf("Error: Contains an unmatched '%c'\n", code[i]);
                return 0;
            }
            
            char topChar = pop();
            if (!isMatchingPair(topChar, code[i])) {
                printf("Error: Mismatched '%c' with '%c'\n", topChar, code[i]);
                return 0;
            }
        }
    }

    // 3. String එක ඉවර වුණාට පස්සේ Stack එකේ තවම වරහනක් ඉතිරි වී ඇත්නම්
    if (!isEmpty()) {
        printf("Error: Contains an unmatched '%c'\n", pop());
        return 0;
    }

    return 1; // All symbols are syntactically balanced
}

int main() {
    char code[MAX];

    printf("Enter code / expression to analyze:\n");
    // Spaces සහිත මුළු පේළියම Input ලබාගැනීමට %[^\n] භාවිතා කරයි
    scanf("%[^\n]", code);

    if (checkSyntaxBalance(code)) {
        printf("\nThe source code is syntactically balanced.\n");
    }

    return 0;
}