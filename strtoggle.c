#include <stdio.h>
#include <ctype.h>   
#include <string.h>  

int main(void) {
    char str[100];
    int i;
    printf("Enter a string to toggle: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } 
        else if (islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }
    printf("The toggled string is: %s\n", str);
    return 0;
}