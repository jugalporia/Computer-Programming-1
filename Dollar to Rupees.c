#include <stdio.h>
 void main(){
 	int a,b;
 	printf("Enter dollar amount:\n");
    /*conversion rate given in the question i.e. 1 dollar = 48 rupees */ 
 	scanf("%d",&a);
 	b= a*48;
 	printf("Rupees conversion for that amount is %d Rs.",b);
 }