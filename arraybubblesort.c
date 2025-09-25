#include <stdio.h>
void main (){
    int a[5],c,j,i;
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(j=4;j>=0;j--){
        for(int i=0;i<j;i++){
            if(a[i]<a[i+1]){
                c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
            }
        }
    }
    for (i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}