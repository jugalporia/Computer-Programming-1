#include <stdio.h>
void main(){
    int *ptr1, **ptr2, ***ptr3;
    int a=2;
    ptr1=&a;
    ptr2=&ptr1;
    ptr3=&ptr2;
    printf("For Ptr2:\nAddress of itself:%d\nAddress it points to:%d\nValue at that addresss:%d\n",ptr2,*ptr2,**ptr2);
    printf("For Ptr1:\nAddress:%d\nValue at that addresss:%d\n",ptr1,*ptr1);
    printf("For Ptr3:\nAddress of itself:%d\nAddress it points to:%d\nAddress it points to further:%d\nValue at that addresss:%d\n",ptr3,*ptr3,**ptr3,***ptr3);
}