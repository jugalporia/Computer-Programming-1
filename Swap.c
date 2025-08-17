#include <stdio.h>
void main(){
    /*swapping variables*/
    int a,b,c;
    printf("Let's swap variables values\nEnter A and B in order:\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Variable A=%d\nVariable B=%d",a,b);
}