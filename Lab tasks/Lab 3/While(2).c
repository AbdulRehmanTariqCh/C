/*Write a C program that uses a while loop to calculate and print the product of the
odd integers from 0 to 19.*/
#include<stdio.h>
int main()
{
    int num=1,sum=1;
    while(num!=19){
        num+=2;
        sum+=num;
    }
    printf("%d\n",sum);

    system("pause");
    return 0;
}