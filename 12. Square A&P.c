#include <stdio.h>
void main(){
    float s,a,p;
    printf("Enter side length of the square in metres:\n");
    scanf("%f",&s);
    a=s*s;
    p=4*s;
    printf("Area of your square is %f sq.m\nPerimeter of your square is %f m",a,p);
}