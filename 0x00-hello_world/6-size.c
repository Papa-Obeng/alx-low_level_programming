/**
 * main - Entry point
 * the sizeof function helps us to get the size of the datatypes
 * the printf function prints the sizes
 * Return: 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}

