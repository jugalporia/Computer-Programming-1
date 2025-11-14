#include <stdio.h>
void main(){
    int a[3][3],i,j;
    int *ptr1;
    int **ptr2;
    
    printf("Enter elements of 3x3 2d array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    ptr1=&a[0][0];
    ptr2=&ptr1;

    printf("The diagonal elements of the enetered array are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                ptr1=&a[i][j];
                printf("%d\n",**ptr2);
            }
        }
    }
}