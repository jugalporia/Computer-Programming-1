#include <stdio.h>
void main(){
    int i,a,sum=0;
    printf("enter a no.:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i=i+2){
        sum=sum+i;
    }
    printf("%d",sum);
}
