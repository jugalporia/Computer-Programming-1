#include <stdio.h>
void main(){
    int a,b=5,i,j;
    //A
    for(a=1;a<=5;a++){
        printf("%d ",a);
        for(;b>=1;){
            printf("%d\n",b);
            b--;
            break;
        }
    }
    printf("\n\n");
    //B
        for (i=1;i<=3;i++) {
        j = 6 - i;
        printf("%d %d\n", i, j);
        printf("%d %d\n", i, j);
    }

}