#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (10 % num == 0)
	{
		if (num < 10)
		printf("%d", num);
		num++;
	}

	return (0);
}
