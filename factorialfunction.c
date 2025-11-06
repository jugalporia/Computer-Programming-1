#include <stdio.h>
int factorial(int n){
    int result;
    result= n?(n*factorial(n-1)):1;
    return result;
}
void main(){
    int n, result;
    printf("Enter a number to get factorial:\n");
    scanf("%d",&n);
    result=factorial(n);
    printf("The factorial of that number is: %d",result);
}