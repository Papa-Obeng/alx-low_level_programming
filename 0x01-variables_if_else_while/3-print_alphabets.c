#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int w = 65, x = 90;
	int y = 97, z = 122;

	while (w <= x && y <= z)
	{
		putchar(w);
		w++;
		putchar(y);
		y++;
	}

	putchar('\n');

	return (0);
}
