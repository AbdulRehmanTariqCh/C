/*
A car park charges a £2.00 minimum fee to park for up to 3 hours, and an additional £0.50 for each hour or part hour in excess of three hours. The maximum charge for any given 24-hour period is £10.00.
Assume that no car parks for more than 24 hours at a time. Write a C program that will calculate and print the parking charges for each of 3 customers who parked their car in the car park yesterday.
The program should accept as input the number of hours that each customer was parked, and output the results in a neat tabular form, along with the total receipts from the three customers.
The program should use the function calculate_charges to determine the charge for each customer.

*/

#include <stdio.h>
#include <stdlib.h>
float calculate_charges(float hours);
int main()
{
    int cars,i;
    float totalCharge=0,totalHours=0;
    do{
    printf("Enter the number of cars parked: ");
    scanf("%d",&cars);
    if(cars<0){printf("Enter a non-negative number.\n");}
    }while(cars<0);
    float hours[cars];
    float charge[cars];
    for(i=0;i<cars;i++)
    {
        printf("Enter hours for car %d: ",i+1);
        scanf("%f",&hours[i]);
        if(hours[i]<0){
            printf("Enter a non-negative number.\n");
            --i;
        }
        else{
        charge[i]=calculate_charges(hours[i]);
        }
    }
    printf("Cars\t\tHours\t\tCharges\n");
    for(i=0;i<cars;i++)
    {
        printf("%d\t\t%.1f\t\t%.2f\n",i+1,hours[i],charge[i]);
        totalCharge+=charge[i];
        totalHours+=hours[i];
    }
    printf("TOTAL\t\t%.1f\t\t%.2f\n",totalHours,totalCharge);
	system("pause");
	return 0;
}
float calculate_charges(float hours)
{
    float bill;
    if(hours<=3.0){bill=2.0;return bill;}
    else
        {
        hours-=3;
        bill=0.5*hours;
        bill+=2;
        if(bill>10){bill=10;}
    return bill;
    }
}
