#include <stdio.h>
float main(){
    float a,b;
    printf("Enter weight in gms:\t")
    scanf("%f",&a);
    b=a/1000.0;
    printf("In kilograms that is %f kgs",b);
}