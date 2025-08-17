#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter file size in bytes:\n");
    scanf("%d",&a);
    b=a/1024.0;
    c=b/1024.0;
    d=c/1024.0;
    printf("That file is %dKB %dMB %dGB",b,c,d);
}