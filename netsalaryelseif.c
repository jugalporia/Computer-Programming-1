#include <stdio.h>

 void main(){
    float NS,GS,ALW,DDS;
    printf("Enter your gross salary:\n");
    scanf("%f",&GS);
    if (GS > 10000.0)
    {
        ALW = 0.1*GS;
        DDS = 0.03*GS;
        NS = GS + ALW - DDS;
        printf("Your net salary is %f Rs.",NS);
    }
    else if(GS >5000.0)
    {
        ALW = 0.07*GS;
        DDS = 0.02*GS;
        NS = GS + ALW - DDS;
        printf("Your net salary is %f Rs.",NS);
    }
    else{
        printf("Calculation error.\n");
    }

 }