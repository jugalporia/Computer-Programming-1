#include <stdio.h>
void main() {
    int a,b,c,T,A;
    printf("Enter marks of three subjects:\n");
    scanf("%d%d%d",&a,&b,&c);
    T=a+b+c;
    A=T/3;
    printf("Total is equal to %d\n",T);
    printf("Average is equal to %d\n",A);
    if((a<35)||(b<35)||(c<35)){
        printf("Fail.");
    }
    else if(A>=70){
        printf("Grade : Distinction");
    }
    else if(A>=60){
        printf("Grade : First class");
    }
    else if(A>=50){
        printf("Grade : Second Class");
    }
    else if(A>=35){
        printf("Grade : Third Class");
    }
    else{
        printf("Fail.");
    }
}