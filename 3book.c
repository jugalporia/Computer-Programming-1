#include <stdio.h>
#include <string.h>
void main(){
    int numbook=3, maxlength=100,i;
    char store[numbook][maxlength];
    char *booknames[numbook];
    for(i=0;i<numbook;i++){
    booknames[i]=store[i];
    }
    printf("Enter 3 book names:\n");
    for(i=0;i<numbook;i++){
        printf("Book %d: ", i+1);
        fgets(booknames[i], maxlength, stdin);
        booknames[i][strcspn(booknames[i], "\n")] = '\0';
    }
    printf("\n Your Book List\n");
    for (i = 0; i < numbook; i++) {
        printf("%s\n", booknames[i]);
    }
}