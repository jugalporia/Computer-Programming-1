#include <stdio.h>
void main(){
    int a,b,c;

    //A
    for(a=1;a<=2;a++){
        for(b=1;b<=3;b++){
        printf("%d ",a);
        printf("%d\n",b);
        }
    }

    printf("\n\n");

    //B
    for(a=1;a<=3;a++){
        for(b=1;b<=a;b++){
            printf("%d ",a);
            printf("%d\n",b);
        }
    }

    printf("\n\n");

    //C
    for(a=1;a<=2;a++){
        for(b=1;b<=2;b++){
            for(c=1;c<=2;c++){
            printf("%d ",a);
            printf("%d ",b);
            printf("%d\n",c);
            }
        }
    }  
    
    printf("\n\n");

    //D
    for(a=5;a>=3;a--){
        for(b=1;b<=2;b++){
        printf("%d ",a);
        printf("%d\n",b);
        }
    }
}