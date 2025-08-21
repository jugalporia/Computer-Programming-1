#include <stdio.h>
void main(){
    int i,a,sum=0;
    printf("enter a no.:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}
