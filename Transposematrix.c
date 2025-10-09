#include <stdio.h>
void main(){
    int a[2][2], b[2][2],j,i;
    printf("Enter elements of your matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Normal Matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transposed matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}