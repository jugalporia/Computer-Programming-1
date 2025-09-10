#include <stdio.h>
void main(){
    int n,i,z=1;
    printf("Enter a number:\t");
    scanf("%d",&i);
    printf("separated digits are:\n");
    for(;i>0;i=i/10){
        n=i%10;
        printf(" %d",n);
        if(i<=10){
            z=0;
        }
        switch (z)
        {
        case 1:
            printf(",");
            break;
        
        default:
            printf(".");
        }
    }
}