#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that prints all the arguments
 * argc - the number of arguments
 * argv - an array of string
 * Return: 0
 */

int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}

	return (0);
}
