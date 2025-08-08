#include <stdio.h>
float main(){
    float a,b;
    printf("enter fahrenheit temperature:\n");
    scanf("%d",&a);
    b= (a-32)*(5/9.0);
    printf("that is %d celcius",b);
}