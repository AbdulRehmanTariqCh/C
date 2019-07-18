/*
Write a C program that will determine if a department store customer has exceeded
the credit limit on a charge account. For each customer, the following facts are available:
1. Account number
2. Balance at beginning of month
3. Total of all items charged by the customer this month
4. Total of all credits applied to the account this month
5. Allowed credit limit
The program should input each of these facts, calculate the new balance (initial balance +
charges - credits) and determine if the new balance exceeds the credit limit. If it does, a suitable
message should be displayed.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	float accNumber,iniBalance,totalCharges,totalCredits,limit;

	do{
		printf("1. Enter account number(-1 to end): ");
		scanf("%f",&accNumber);
		if(accNumber==-1){exit(0);}
		printf("Enter initial balance: ");
		scanf("%f",&iniBalance);
		printf("Enter total charges: ");
		scanf("%f",&totalCharges);
		printf("Enter total credits: ");
		scanf("%f",&totalCredits);
		printf("Enter credit limit: ");
		scanf("%f",&limit);
		printf("\n");
		printf("Account: %.0f\n",accNumber);
		printf("Credit limit: %.1f\n",limit);
		printf("Balance: %.1f\n",(iniBalance+totalCharges)-totalCredits);
		if(((iniBalance+totalCharges)-totalCredits)>iniBalance){
			printf("Credit Limit Exceeded.\n");
		}
	}while(accNumber!=-1);

	system("pause");
	return 0;
}
