#include <stdio.h>
#include <string.h> 

int main(void) {
    char str1[200]; 
    char str2[100];

    printf("Enter the first string: ");
    fgets(str1, 200, stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string (to add): ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("\nResult:\n");
    printf("The concatenated string is: %s\n", str1);

    return 0;
}