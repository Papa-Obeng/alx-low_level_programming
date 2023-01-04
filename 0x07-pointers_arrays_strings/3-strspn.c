#include "main.h"
/**
 * _strspn - locates a character in s string
 * @s: This is the main C string to be scanned
 * @accept: The string contain the list of the characters to match in s
 * Return: return count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				count++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}

	return (count);
}
