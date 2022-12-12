#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int w = 65, x = 90;
	int y = 97, z = 122;

	while (y <= z)
	{
		putchar(y);
		y++;
	}

	while (w <= x)
	{
		putchar(w);
		w++;
	}

	putchar('\n');

	return (0);
}
