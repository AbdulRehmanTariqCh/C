/*
A large chemical company pays its sales staff on a commission basis. They receive
£200 per week plus 9% of their gross sales for that week. For example, someone who sells £5000
of chemicals in one week will earn £200 plus 9% of £5000, a total of £650. Develop a C program
that will input each salesperson’s sales for the previous week, and print out their salary. Process
one person’s figures at a time.
*/
#include<stdio.h>
#include<stdlib.h>
#define PAY 200
int main(){
	float sales,salary;

	do{

		printf("Enter sales in pounds(-1 to end): ");
		scanf("%f",&sales);
		if(sales==-1){exit(0);}
		salary=0.09*sales;
		salary+=PAY;
		printf("Salary: %.2f\n",salary);
		}while(salary!=-1);

	system("pause");
	return 0;
}
