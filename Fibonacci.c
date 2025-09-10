#include <stdio.h>
void main (){
    int n;
    printf("Enter the no. of terms of Fibonacci series you want:\n");
    scanf("%d",&n);
    int Tn,Tn1=-1,Tn2=1;
    for(;n>=0;n--){
        Tn=Tn1+Tn2;
        printf("%d ",Tn);
        Tn1=Tn2;
        Tn2=Tn;
    }
}