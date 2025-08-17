#include <stdio.h>
void main(){
    float a,b,c,d;
    printf("Enter marks of the three subject:\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(a+b+c)/3.0;
    printf("Avg. marks of the 3 subjects is %f",d);
}