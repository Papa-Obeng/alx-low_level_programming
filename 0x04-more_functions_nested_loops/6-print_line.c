#include "main.h"

/**
 * print_line - the function that will print the line
 * @n: the number of times the line will be printed
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int a = 1;

	while (a < 20)
	{
		if (a <= 0)
		{
			_putchar("\n");
		}
		else
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}


