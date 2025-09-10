#include <stdio.h>
//if sum of cube of digit = number itself
void main (){
    int i,ognumber,n,sum=0;
    printf("Enter a number to check if it is an armstrong number:\n");
    scanf("%d",&i);
    ognumber=i;
    for(;i>0;i=i/10){
        n=i%10;
        sum = sum + (n*n*n);
    }
    if (ognumber==sum){
        printf("Entered number is an armstrong number.");
    }
    else{
        printf("Entered number is not an armstrong number.");
    }
}