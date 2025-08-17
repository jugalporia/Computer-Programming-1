#include <stdio.h>
float main(){
    /*Calculating net sale*/
    /*net sale= gross sale  -discount*/
    float NS,GS,DS;
    printf("Enter gross sale:"\n);
    scanf("%f",&GS);
    DS=0.1*GS
    NS = GS - DS;
    printf("Your net sale is %f Rs.",NS);
}