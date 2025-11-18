#include <stdio.h>
void main(){
    int arr[5]={1,2,3,4,5},i;
    printf("The original arrray:\n");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    printf("The reversed array:\n");
    for(i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
}