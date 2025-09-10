#include <stdio.h>
void main (){

    int Unum,sqnum,numcompare;

    //ask for the number to start the program
    printf("Enter a number to check whether it is automorphic or not:\n");
    scanf("%d",&Unum);


    //first we will square the given number
    sqnum=Unum*Unum;
    printf("squared digit is %d\n",sqnum);


    //we will take out the last n number of digits from the square where n = number of digits in the Unum


    if (Unum<10){          //that means the number has 1 digit
        int lastdig;
        lastdig=sqnum%10;
        numcompare=lastdig;
    }


    else if (Unum>=10){          //that means the number has 2 digits

        int i=2,dig1,dig2; //local declarations

        while(i>0){
            i--;        //since two digits, while loop will run twice
            //store the last digit and last second digit separately using two if statements

            if(i==1){    //first time the loop runs it will be last digit
                dig1=sqnum%10;
            }
            if(i==0){    //second time the loop runs it will be the last second digit
                dig2=sqnum%10;
            }
            sqnum=sqnum/10;//reduce the number for the next time the loop runs.
        }
        numcompare=dig2*10+dig1;//this will be compared with the entered digit
    }


    /*else if (Unum>=100){          //that means the number has 3 digits

        int i=3,dig1,dig2,dig3; //local declarations

        while(i>0){
            i--;        //since 3 digits, while loop will run thrice
            //store the last digit and last second digit and last third digit separately using 3 if statements
            
            if(i==2){    //first time the loop runs it will be last digit
                dig1=sqnum%10;
            }
            if(i==1){    //second time the loop runs it will be the last second digit
                dig2=sqnum%10;
            }
            if(i==0){    //third time the loop runs it will be the last third digit
                dig3=sqnum%10;
            }
            sqnum=sqnum/10;//reduce the number for the next time the loop runs.
        }
        numcompare=dig3*100+dig2*10+dig1;//this will be compared with the entered digit
    }*/

    //Conclusional code
    if(Unum==numcompare){
        printf("The entered number is automorphic.");
    }
    else{
        printf("The entered number is not automorphic.");
    }
}