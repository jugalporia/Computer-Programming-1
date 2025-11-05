#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int length;
    int i, j;
    int isPalindrome = 1; 

    printf("Enter a string to check: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; 

    length = strlen(str);

    if (length == 0) {
        printf("The string is empty.\n");
        return 0;
    }
    
    for (i = 0, j = length - 1; i < j; i++, j--) {

        if (str[i] != str[j]) {
            isPalindrome = 0; 
            break;
        }
    }

    printf("\nResult:\n");
    if (isPalindrome == 1) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}