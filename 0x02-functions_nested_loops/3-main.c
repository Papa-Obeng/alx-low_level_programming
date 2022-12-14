#include "main.h"

/**
 * _islower - checks for lowercase character
 * @n: The character to be checked
 *
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int n)
{
	if (n >= 97 && n <= 122)
	{
		return (1);
	}
	else
		return (0);
}
