#include "main.h"
/**
 * _strlen - Finds the lenght of a string
 * @s: String pointer to the string whose lenght is to be found
 * Return: returns the lenght of the string
 */

int _strlen(char *s)
{
	int p = 0;
	/* increment up to when the last character is NULL */
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
