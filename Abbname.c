#include <stdio.h>
#include <string.h>
void main(){
    int names=3, maxlength=100,i;
    char store[names][maxlength];
    char *personnames[names];
    for(i=0;i<names;i++){
    personnames[i]=store[i];
    }
    printf("Enter first, middle and last:\n");
    for(i=0;i<names;i++){
        printf("Name %d: ", i+1);
        fgets(personnames[i], maxlength, stdin);
        personnames[i][strcspn(personnames[i], "\n")] = '\0';
    }
    printf("\n Your Abbreviation:\n");
    for (i = 0; i < names-1; i++) {
        printf("%c", store[i][0]);
    }
}