#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97, e = 101, q = 113, z = 122;

	while (a <= z)
	{
		if (a == e || a == q)
			printf("-");
		else
			putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}

