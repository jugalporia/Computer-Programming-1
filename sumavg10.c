#include <stdio.h>
void main(){
    int a,i,sum=0;
    float avg;
    a=10;
    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    avg=sum/a;
    printf("%.2f\n",avg);

}
