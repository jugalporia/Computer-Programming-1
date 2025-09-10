#include <stdio.h>

void main (){
    int i,n,sum=0;
    printf("Enter a number to check if it is perfect or not:");
    scanf("%d",&i);
    for(n=1;n<=i/2;n++){
        if (i%n==0){
            sum=sum+n;
        }
    }
    if(sum==i){
        printf("It is a perfect no.");
    }
}