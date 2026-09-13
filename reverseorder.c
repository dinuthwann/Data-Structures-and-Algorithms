#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter the word: ");
    scanf("%s", str);

    printf("Reverse value: ");
    int len = strlen(str);
    
    // last come first and continue
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}