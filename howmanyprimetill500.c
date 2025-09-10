#include <stdio.h>

int main() {
    int n,i,a,sum=0;
    for(n=2;n<=500;n++){
        a=1;
            for (i=2; i<=n/2; i++) {
                if (n%i==0) {
                    a=0;
                }
        }
        if (a)
            sum=sum+1;
    }
    printf("%d",sum);
}