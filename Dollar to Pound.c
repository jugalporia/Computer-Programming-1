#include <stdio.h>
float main(){
    /*Given to us: 1 dollar = 48 rupees, 1 pound = 70 rupees */
    float a,b,c;
    printf("Enter dollar amount:\n");
    scanf("%f",&a);
    c=a*48.0;
    b=c/70.0;
    printf("That is %f pounds.",b);
}