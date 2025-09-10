#include <stdio.h>

void main (){
    int i,n,z=1;
    printf("Enter a number to get it's factors:");
    scanf("%d",&i);
    for(n=1;n<=i;n++){
        if (i%n==0){
            printf(" %d",n);
             if(n==i){
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

}