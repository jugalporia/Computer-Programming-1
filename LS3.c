#include <stdio.h>
void jugal(){
int a,b,c;
printf("Enter 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
    printf("a is the largest\n");
else if (b>c && b>a)
    printf("b is the largest\n");
else
    printf("c is the largest\n");

if (a<b && a<c)
    printf("a is the smallest");
else if (b>c && b>a)
    printf("b is the smallest");
else
    printf("c is the smallest");
}

