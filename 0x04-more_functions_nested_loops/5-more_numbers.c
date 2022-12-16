#include "main.h"

/**
 * more_functions_nested_loops-the function that prints 10x numbers from 0 to 14
 * @co: the number of times the print will happen
 * @n: the number that will be printed
 */

void more_numbers(void)
{
	int co = 0;

	while (co < 10)
	{
		int n;

		for (n = '0'; n <= '14'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		co++;
	}
}
