#include <stdio.h>
void main(){
    int n,i;
    printf("Enter a number:\t");
    scanf("%d",&i);
    printf("Separated digits are:\n");
    for(;i>0;i=i/10){
        n=i%10;
        printf("%d",n);
    }

}
