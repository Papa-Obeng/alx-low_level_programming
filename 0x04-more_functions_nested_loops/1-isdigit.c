#include "main.h"

/**
 * -isdigit funtion - The function that checks whether the input is a digit
 *  @c: The input number to be checked
 *
 *  Return: Returns boolean
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
