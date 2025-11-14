#include <stdio.h>
#include <string.h>
void main(){\
    char str1[]={"Hello World!"},str2[]={"Hello Wield!"};
    int i;
    char *ptr1,*ptr2;

    ptr1=&str1[0];
    ptr2=&str2[0];
    for(i=0;i<strlen(str1);i++){
        if(*(ptr1+i)!=*(ptr2+i)){
            printf("\"%c\" is not equal to \"%c\" at index %d",*(ptr1+i),*(ptr2+i),i);
            break;
        }
    }
}