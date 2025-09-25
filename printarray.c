#include <stdio.h>
void main(){
    int a[5],i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        printf("\n");
    }
    for(i=0;i<5;i++){
    printf("%d ",a[i]);
    }

}