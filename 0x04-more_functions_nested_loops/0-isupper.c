#include "main.h"

/**
 * _isupper - checks if the imput is an uppercase
 * @c: The input to be checked
 *
 * Return: Gives 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
