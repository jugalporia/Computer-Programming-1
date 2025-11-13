#include <stdio.h>
void main(){
    int num=1, *ptr1, *ptr2;
    ptr1 = &num;
    ptr2 = &num;
    printf("address pointed by ptr1: %d\n",ptr1);
    printf("value at that address: %d\n",*ptr1);
    printf("address pointed by ptr1: %d\n",ptr2);
    printf("value at that address: %d\n",*ptr2);
    if(ptr1==ptr2){
        printf("These pointer point to the same address\n");
    } else{
        printf("These pointer do not point to the same address\n");
    }
}