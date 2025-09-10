#include <stdio.h>
void main(){
    int i,Onum,Rnum=0,Remainder;
    printf("Enter a number:\t");
    scanf("%d",&i);
    Onum=i;
    while (i!=0){
        Remainder=i%10;
        Rnum=Rnum*10+Remainder;
        i=i/10;
    }
    if(Rnum==Onum){
        printf("Entered number is a palindrome.");
    }
    else if(Rnum!=Onum){
        printf("Entered number is not a palindrome.");
    }
}