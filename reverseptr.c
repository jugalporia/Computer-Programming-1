#include <stdio.h>
void main(){
    int arr[5]={1,2,3,4,5}, *ptr1, i;
    ptr1=arr;
    for(i=0;i<5;i++){
        printf("%d ",*(ptr1+4-i));
    }
}