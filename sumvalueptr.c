#include <stdio.h>
#include <string.h>
void main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int *ptrf, *ptrb;
    ptrf=arr;
    ptrb=&arr[8];
    printf("Pairs with same sum value in the array of numbers 1 to 9:\n");
    for(int i=0;i<=4;i++){
        printf("(%d,%d)\n",*(ptrf+i),*(ptrb-i));
    }
}