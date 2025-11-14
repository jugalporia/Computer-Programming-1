#include <stdio.h>
void main(){
    int a=5,b=3,*ptr1,*ptr2;
    printf("Original Variables:\n A=%d B=%d\n",a,b);
    ptr1=&a;
    ptr2=&b;
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
    printf("Swapped Variables:\n A=%d B=%d",a,b);
}