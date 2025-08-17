#include <stdio.h>
float main(){
    float a,b;
    printf("Enter Celcius temperature:\n");
    scanf("%d",&a);
    b= (a*9/5.0)+32;
    printf("that is %d fahrenheits",b);
}