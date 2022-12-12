#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 97, y = 122;

	while (x <= y)
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}

