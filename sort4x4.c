#include <stdio.h>
void main(){
    int i,j,a[4][4],c,b[16],k,z;
    printf("Enter elements of a 4x4 matrix:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    k=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            b[k]=a[i][j];
            k=k+1;
        }
    }
    for(z=15;z>0;z--){
        for(k=0;k<z;k++){
            if(b[k]>b[k+1]){
                c=b[k];
                b[k]=b[k+1];
                b[k+1]=c;
            }
        }
    }
        for(k=0;k<16;k++){
            printf("%d ",b[k]);
        }
    }
