/*Write a C program that uses a while loop to calculate and print the sum of the even
integers from 1 to 30.*/
#include<stdio.h>
int main()
{
    int num=0,sum=0;
    while(num!=30){
        num+=2;
        sum+=num;
    }
    printf("%d",sum);

    ("pause");
    return 0;
}
