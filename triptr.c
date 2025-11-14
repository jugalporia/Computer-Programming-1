#include <stdio.h>
void main(){
int a=99, *ptr1, **ptr2, ***ptr3;
ptr1=&a;
ptr2=&ptr1;
ptr3=&ptr2;
printf("%d",***ptr3);
}