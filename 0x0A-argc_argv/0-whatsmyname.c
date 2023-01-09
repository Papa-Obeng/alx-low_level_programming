#include <stdlib.h>
#include <stdio.h>
/**
 * main - the function to print the name of the program
 * @argc: argument count
 * @argv: array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char name[] = "mynameis";

	if (argc > 0)
	{
	printf("%s\n", name);
	}
	return (0);
}
