#include <stdio.h>
void main(){
    int arr1[4]={1,2,3,4},*ptr,arr2[4];
    ptr = arr1;
    printf("Elements of arr1:\n");
    for(int i=0;i<4;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("Elements of arr2:\n");
    for(int i=0;i<4;i++){
        arr2[i]= *(ptr + i);
        printf("%d ",arr2[i]);
    }
}