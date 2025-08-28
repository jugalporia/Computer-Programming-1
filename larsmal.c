#include <stdio.h>
void main(){
    int l,i,s,a;
    printf("Enter a random no.:");
    scanf("%d",&a);
    l=a;
    s=a;
    for(i=1;i<=9;i++){
        printf("Enter a random no.:");
        scanf("%d",&a);
        if(a>l){
            l=a;
        }
        if(a<s){
            s=a;
        }
    }
printf("\nlargest=%d\nsmallest=%d",l,s);
}
