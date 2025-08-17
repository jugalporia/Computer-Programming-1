#include <stdio.h>
void main(){
    float l,b,a,p;
    printf("Enter length & breadth of the rectangle in metres:\n");
    scanf("%f%f",&l,&b);
    a=l*b;
    p=2.0*(l+b);
    printf("Area of your rectangle is %f sq.m\nPerimeter of your rectangle is %f m",a,p);
}