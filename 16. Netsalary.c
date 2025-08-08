#include <stdio.h>
float main(){
    /*Calculating net salary*/
    /*net salary= gross salary + allowances -deductions*/
    float NS,GS,ALW,DDS;
    printf("Enter gross salary:"\n);
    scanf("%f",&GS);
    ALW = 0.1*GS;
    DDS = 0.03*GS;
    NS = GS + ALW - DDS;
    printf("Your net salary is %f Rs.",NS);
}