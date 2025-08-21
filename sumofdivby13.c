#include <stdio.h>
void main(){
    int i,s=0;
    for(i=1;i<=100;i++){
       if(i%13==0){
        s=s+i;
       }
    }
    printf("%d",s);
}
