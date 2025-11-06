#include <stdio.h>
int power (int a, int b){
    int result=1;
    for(;b>0;b--){
        result=result*a;
    }
    return result;
}
void main(){
    int a, b, result;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    result=power(a,b);
    printf("a^b=%d",result);
}