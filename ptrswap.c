#include <stdio.h>
void main(){
    int a,b,c;
    int *aptr, *bptr;
    a=5;
    b=3;
    aptr=&a;
    bptr=&b;
    printf("A= %d, B= %d\n",a,b);
    //swapping using pointers
    c=*aptr;
    *aptr=*bptr;
    *bptr=c;
    printf("Swapped variables are:\n");
    printf("A= %d, B= %d",a,b);
}