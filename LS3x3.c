#include <stdio.h>
void main(){
    int i,j,a[3][3],c,b[9],k,z;
    int *num;
    printf("Enter elements of a 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    k=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[k]=a[i][j];
            k=k+1;
        }
    }
    for(z=8;z>0;z--){
        for(k=0;k<z;k++){
            if(b[k]>b[k+1]){
                c=b[k];
                b[k]=b[k+1];
                b[k+1]=c;
            }
        }
    }
    num = b;
    printf("The sorted array:\n");
        for(k=0;k<9;k++){
            printf("%d ",b[k]);
        }
    printf("\n");
    printf("The smallest number:\n");
    printf("%d \n",*num);
    printf("The largest number:\n");
    printf("%d \n",*(num+8));
}
