#include <stdio.h>
void main(){
    int a[]={500,200,100,50,20,10,5,2,1},n,c[9],i=0;
    printf("Enter an amount:\n");
    scanf("%d",&n);

    for(;i<9;i++){
        c[i]=0;
    }

    for(;n>0;){
        if(n>a[i]){
            n=n-a[i];
            c[i]=c[i]+1;
        }
        else{
            i=i+1;
        }
    }
    printf("%d=",n);
    for(i=0;i<9;i++){
    printf("%d*%d+",a[i],c[i]);
    }
}