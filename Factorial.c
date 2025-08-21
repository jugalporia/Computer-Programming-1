#include <stdio.h>
void main(){
    int i,a,f=1;
    printf("enter a no. to get its factorial:\n");
    scanf("%d",&a);
    for(i=a;i>0;i=i-1){
        f=f*i;
    }
    printf("%d",f);
}
