#include <stdio.h>
int leapyearcheck(int year){
    int flag=1;
    if(year%4!=0){
        flag=0;
    }
    else if(year%4==0&&year%100==0&&year%400!=0){
        flag=0;
    }
    return flag;
}
int main(void){
    int flag, year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    flag=leapyearcheck(year);

    if(flag){
        printf("Entered year is a leap year");
    }
    else{
        printf("Entered year is not a leap year");
    }
}