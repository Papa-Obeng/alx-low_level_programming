/**
 * main - Entry point
 * the sizeof function helps us to get the size of the datatypes
 * the printf function prints the sizes
 * Return: 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	printf("Size of a char %zu\n: " sizeof(char)" byte");
	printf("Size of an int %zu\n: " sizeof(int) "bytes");
	printf("Size of a long int %zu\n: " sizeof(long int) "bytes");
	printf("Size of a long long int %zu\n: " sizeof(long long int) "bytes");
	printf("Size of a float %zu\n: " sizeof(float) "bytes");
	return (0);
}

