#include <stdio.h>
int main() 
{ 
	int a, b, hold; 
	printf("\nPlease enter first number: "); 
	scanf("%d", &a);
	printf("Please enter second number: "); 
	scanf("%d", &b); 
	printf("\nBefore Swap: %d %d", a, b); 
	a = a + b; 
	b = a - b; 
	a = a - b; 
	printf("\nAfter Swap: %d %d\n", a, b); 
	printf("Swaping using a third variable.\n");
	printf("Before Swap: %d %d", a, b); 
	hold = a; 
	a = b;
	b = hold; 
	printf("\nAfter Swap: %d %d\n", a, b); 

	system("pause");
	return 0; 
} 
