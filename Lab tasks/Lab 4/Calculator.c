/*
Implement a simple calculator and write the same program using functions.
*/
#include<stdio.h>
#include<stdlib.h>
double add(float num1,float num2);
double sub(float num1,float num2);
double division(float num1,float num2);
double mul(float num1,float num2);
int main(){
	char input;
	float num1,num2;
	do{
        printf("Select any binary operation (e to exit).\n");
        printf("1.Add (+)\n2.Subtract (-)\n3.Divide (/)\n4.Multiply (x)\n");
        scanf("%s",&input);
        if(input=='e'||input=='E'){exit(0);}
        printf("Enter first number: ");
        scanf("%f",&num1);
        printf("Enter second number: ");
        scanf("%f",&num2);
        switch(input)
        {
        	case '1':
            case '+':
        			printf("%.2f+%.2f= %.4f\n",num1,num2,add(num1,num2));
        			break;
        	case '2':
        	case '-':
        			printf("%.2f-%.2f= %.4f\n",num1,num2,sub(num1,num2));
        			break;
        	case '3':
        	case '/':
        			printf("%.2f/%.2f= %.4f\n",num1,num2,division(num1,num2));
        			break;
        	case '4':
        	case '*':
        			printf("%.2fx%.2f= %.4f\n",num1,num2,mul(num1,num2));
        			break;
        	default:
        			printf("Invalid input.\n");

        }
	}while(input!=-1);


	system("pause");
	return 0;
}
double add(float num1,float num2){return num1+num2;}
double sub(float num1,float num2){return num1-num2;}
double division(float num1,float num2){return num1/num2;}
double mul(float num1,float num2){return num1*num2;}
