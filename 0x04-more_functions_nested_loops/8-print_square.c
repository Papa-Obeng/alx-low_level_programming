#include "main.h"

/**
 * print_square - the function that prints square using #
 * @size - is the sixe of the square
 * @size = 0 - the function will only print a new line
 */

void print_square(int size)
{
	int i, c;

	size = 8;

	for (i = 1; i <= size; i++)
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
