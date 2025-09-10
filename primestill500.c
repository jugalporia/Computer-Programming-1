#include <stdio.h>

int main() {
    int n=500,sum=0,i,num,a;
    for (num=2;num<=n;num++) {
        a=1;
        for (i=2;i<=num/2;i++) {
            if (num%i==0) {
                a=0;
                break;
            }
        }
        if (a==1) {
            printf("%d ",num);
        }
    }
}
