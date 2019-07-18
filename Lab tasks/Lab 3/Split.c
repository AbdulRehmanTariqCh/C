/*
Write a program that reads in a four-digit number, separates the number into its individual
digits and prints them separated by three spaces. Thus given the number 4233, the program should print:
*/
#include<stdio.h>
int main()
{
    int num, dig1, dig2, dig3, dig4;
    do{
            printf("Enter a 4 digit whole number: ");
            scanf("%d", &num);
            if(num<=999||num>9999){printf("Entered number is not four digit.\n");}
        }while(num<=999||num>9999);
    dig4=num%10;
    num=num/10;
    dig3=num%10;
    num=num/10;
    dig2=num%10;
    num=num/10;
    dig1=num%10;
    printf("%d   %d   %d   %d\n", dig1, dig2, dig3, dig4);

    system("pause");
    return 0;
}
