#include <stdio.h>
void main(){
    int a,b,A,S,D,M;
    printf("Enter two numbers you want all the operations being done on:\n");
    scanf("%d%d",&a,&b);
    A=a+b;
    S=a-b;
    D=a/b;
    M=a*b;
    printf("Addition = %d\nSubtraction = %d\nDivision = %d\nMultiplication = %d",A,S,D,M);
}