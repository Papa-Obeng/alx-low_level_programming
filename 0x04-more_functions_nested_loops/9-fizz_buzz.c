#include <stdio.h>

/**
 * main - Entry point for the program
 * Return: Always 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else
			printf(n, '\n');
	}
}
