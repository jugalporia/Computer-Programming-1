#include <stdio.h>
#include <string.h>

int main(void) {
    char userInput[100];
    int length;

    printf("Enter a string: ");

    fgets(userInput, 100, stdin);
    userInput[strcspn(userInput, "\n")] = '\0';
    length = strlen(userInput);
    printf("You entered: \"%s\"\n", userInput);
    printf("The length of the string is: %d\n", length);

    return 0;
}