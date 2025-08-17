#include <stdio.h>
void main(){
    float p,r,t,I;
    printf("Calculation of Interest\n");
    printf("Enter Principal amount(P):\n");
    scanf("%f",&p);
    printf("Enter Interest Rate(R):\n");
    scanf("%f",&r);
    printf("Enter Time duration(T) in years:\n");
    scanf("%f",&t);
    I=(p*r*t)/100.0;
    printf("Your interest amount is %f rupees",I);
}