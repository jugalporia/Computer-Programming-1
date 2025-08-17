#include <stdio.h>
 void main(){
    int a,b;
    printf("Enter a number:\n");
    scanf("%d",&a);
    b = a % 7;
    if (b==0){
        printf("The number is divisible by 7.");
    }
    else {
        printf("The number is not divisible by 7.");
    }
 }