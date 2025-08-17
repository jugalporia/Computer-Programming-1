#include <stdio.h>
void main(){
    float NS,GS,DIS;
    printf("Enter your gross sales:\n");
    scanf("%f",&GS);
    if (GS>20000){
        DIS=0.15*GS;
    }
    else if(GS>10000){
        DIS=0.1*GS;
    }
    else{ 
    printf("calculation error");
    }
    NS=GS-DIS;
    printf("Your net sale is %f Rs.",NS);
}