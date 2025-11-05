#include <stdio.h>
void main(){
    int arr[5], *ptr;
    printf("Enter elements for an array of size 5:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    printf("The third element of the array is:\n");
    printf("%d",*(ptr+2));
}