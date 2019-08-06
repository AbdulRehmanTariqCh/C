#include <stdio.h>
int main()
{
	int a, b;
	printf("\nPlease enter first number: ");
	scanf("%d", &a);
	printf("Please enter second number: ");
	scanf("%d", &b);
	printf("\n%d+%d: %d\n%d-%d: %d\n%d*%d: %d\n%d/%d: %d\nRemainder: %d\n", a, b, a + b, a, b, a - b, a, b, a*b, a, b, a / b, a % b);

	system("pause");
	return 0;
}
