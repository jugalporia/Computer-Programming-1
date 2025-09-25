#include <stdio.h>
void main(){
    int a[10],i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("%d ",a[3]);
    printf("%d ",a[6]);
    printf("%d ",a[8]);
}