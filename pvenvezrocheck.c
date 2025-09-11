#include <stdio.h>
void main(){
    int i, n,pnum=0,nnum=0,znum=0;
    printf("Enter 5 numbers:\n");
    for(i=4;i>0;i--){
    scanf("%d\n",&n);
    if (n>0){
        pnum=pnum+1;
    }
    else if(n<0){
        nnum=nnum+1;
    }
    else if(n==0){
        znum=znum+1;
    }
    }
    printf("no. of positive numbers=%d\n",pnum);
    printf("no. of negative numbers=%d\n",nnum);
    printf("no. of zero numbers=%d\n",znum);    
}