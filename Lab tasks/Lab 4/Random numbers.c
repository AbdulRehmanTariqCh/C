/*
Write a program that uses six calls to the function rand() to generate six random integer numbers, num1, num2, num3, num4, num5, and num6
and then print them out.num1 should be in the range 1 to 2 (inclusive), num2 should be in the range 1 to 100 (inclusive), num3 should be
in the range 0 to 9, num4 should be in the range 1000 to 1112 (inclusive), num5 should be in the range -1 to 1, and num 6 should be in the range -3 to 11

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num1,num2,num3,num4,num5,num6;
    num1=(rand() % 2) + 1;
    num2=(rand() % 100) + 1;
    num3=(rand() % 10);
    num4=(rand() % 112) + 1000;
    num5=(rand() % 2) -1;
    num6=(rand() % 13) - 2;
    printf("Range\t\t\tNumber\n1 to 2\t\t\t%d\n1 to 100\t\t%d\n0 to 9\t\t\t%d\n1000 to 1112\t\t%d\n-1 to 1\t\t\t%d\n-3 to 11\t\t%d\n",num1,num2,num3,num4,num5,num6);

	system("pause");
	return 0;
}
