/*
Develop a program to calculate the basic salary of 5 employees where the hourly rate and the
no. of hours worked by each employee are given by the user
*/

#include<stdio.h>
int main()
{
    int hours,i;
    float rate,salary[5];
    for(i=0;i<5;i++)
    {
        do{
                printf("Enter hourly rate for employee %d: Rs ",i+1);
                scanf("%f",&rate);
                if(rate<0)
                {
                    printf("Enter a non-negative number.\n");
                    --i;
                }
        }while(rate<0);
        do{
                printf("Enter hours worked by employee %d: ",i+1);
                scanf("%d",&hours);
                if(hours<0)
                {
                    printf("Enter a non-negative number.\n");
                    --i;
                }
            }while(hours<0);
            salary[i]=rate*hours;
    }
    for(i=0;i<5;i++)
    {
        printf("Salary for employee %d: Rs %.2f\n",i+1,salary[i]);
    }

    system("pause");
    return 0;
}
