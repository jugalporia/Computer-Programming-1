#include <stdio.h>
void main(){
    int n,i,s=0;
    printf("Enter a number:\t");
    scanf("%d",&i);
    printf("length of number:\n");
    for(;i>0;i=i/10){
        n=i%10;
        s=s+1;
    }
    printf("%d",s);
}