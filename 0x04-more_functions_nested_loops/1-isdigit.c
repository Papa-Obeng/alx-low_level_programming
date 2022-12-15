#include "main.h"

/**
 * -isdigit funtion - The function that checks whether the input is a digit
 *  @c: The input number to be checked
 *
 *  Returned: Always 0 (Success)
 */

int _isdigit(int c)
{
	int a = 48, b = 57;

	if (c >= a || c <= b)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
