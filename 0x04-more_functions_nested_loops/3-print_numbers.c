#include "main.h"

/**
 * print_numbers - Function that prints from 0 to 9
 * for_loop - Helps for the process to be repeated
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)

	{
		_putchar(i);
	}

	_putchar('\n');
}
