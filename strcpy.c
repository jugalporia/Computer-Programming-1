#include <stdio.h>
#include <string.h>
int main(void) {
    char source_string[100];
    char destination_string[100]; 

    printf("Enter a string to copy: ");
    fgets(source_string, 100, stdin);
    source_string[strcspn(source_string, "\n")] = '\0';
    
    strcpy(destination_string, source_string);

    printf("\nResults:\n");
    printf("Original string:   %s\n", source_string);
    printf("Copied string:     %s\n", destination_string);

    return 0;
}