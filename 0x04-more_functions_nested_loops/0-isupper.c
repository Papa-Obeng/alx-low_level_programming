#include "main.h"

/**
 * _isupper - checks if the imput is an uppercase
 * @c: The input to be checked
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	char A = 65;

	char Z = 90;

	if (c >= A || c <= Z)
	{
		return (1);
	}
	else
		return (0);
}
