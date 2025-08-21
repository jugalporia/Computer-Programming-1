#include <stdio.h>
void main(){
    int n,i;
    printf("enter the number till which you want to list even numbers\n");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2){
        printf("%d\n",i);
    }

}
