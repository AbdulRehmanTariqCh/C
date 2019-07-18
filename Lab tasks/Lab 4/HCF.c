/*The greatest common divisor of integers x and y is the largest integer that divides both x and y. Write a recursive function GCD that returns the greatest common divisor
of x and y. The GCD of x and y is defined as follows:
If y is equal to zero, then GCD(x, y) is x; otherwise GCD(x, y) is GCD(y, x % y) where % is the remainder operator*/
#include<stdio.h>
int GCD(int x,int y);
int main()
{
    int num1,num2;
    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Highest common factor for %d and %d is: %d\n",num1,num2,GCD(num1,num2));

    system("pause");
    return 0;
}
int GCD(int x,int y)
{
    if(y==0){return x;}
    else
    {
        GCD(y,x%y);
    }
}