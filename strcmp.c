#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[100], str2[100];
    int result;

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    result = strcmp(str1, str2);

    printf("\n--- Result ---\n");
    if (result < 0) {
        printf("String 1 (\"%s\") is lower than String 2 (\"%s\").\n", str1, str2);
    } 
    else if (result > 0) {
        printf("String 1 (\"%s\") is greater than String 2 (\"%s\").\n", str1, str2);
    } 
    else {
        printf("Both strings are the same.\n");
    }
    return 0;
}