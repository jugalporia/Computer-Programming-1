#include <stdio.h>
void main(){
    int a[2][2], b[2][2], c[2][2], d[2][2],i,j,k;

    //Getting two matrices


    printf("enter elements of array 1:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of array 2:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }


    // ADD & Subtract


    printf("sum of these 2 arrays:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Addition:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }
    printf("Subtraction:\n");
    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",d[i][j]);

        }
        printf("\n");
    }

    //Multiply
    printf("Multiplication:\n");
    for(i=0;i<2;i++){
         for(j=0;j<2;j++){
            c[i][j]=0;
            for(k=0;k<2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
         }
        }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }
    
}