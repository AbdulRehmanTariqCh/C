/*
Implement the following functions. The functions return a real number:
(a) Function Celsius returns the Celsius equivalent of a Fahrenheit temperature (Hint: 0 Celsius is equal to 32 Fahrenheit and 100 Celsius is equal to 212 Fahrenheit).
(b) Function Fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
Use these functions to write a program that prints charts showing the Fahrenheit equivalent of all Celsius temperatures between 0 and 100 degrees
and the Celsius equivalent of all Fahrenheit temperatures between 32 and 212 degrees.
*/

#include <stdio.h>
float celsius(float temp);
float fahrenheit(float temp);
int main()
{
	printf("CELSIUS\t\t\tFAHRENHEIT\t\t\t   FAHRENHEIT\t\t\tCELSIUS\n");
	int i;
	for (i = 0; i <= 212; i++)
	{
		if (i >= 0 && i<32)
		{
			printf("%d C\t\t\t %6.1f F\n", i, fahrenheit(i));
		}
		if (i >= 32 && i <= 100)
		{
			printf("%d C\t\t\t %6.1f F\t\t\t\t%d F\t\t\t%6.1f C\n", i, fahrenheit(i), i, celsius(i));
		}
		if (i>100 && i <= 212)
		{
			printf("     \t\t\t      \t\t\t\t\t%d F\t\t\t%6.1f C\n", i, celsius(i));
		}

	}

	system("pause");
	return 0;
}
float celsius(float temp)
{
	return (temp - 32) / 1.8;
}
float fahrenheit(float temp)
{
	return (temp*1.8) + 32;
}
