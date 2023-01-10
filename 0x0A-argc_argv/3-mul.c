#include <stdlib.h>
#include <stdio.h>

/**
 * main - the function for multiplying two numbers
 * @argc - the number of arguments passed through the commandline
 * @argv - a string of array
 * @num1 - the first number
 * @num2 - the second number
 * @result - the result after the multiplication
 * Return: result
 */
int main(int argc, char *argv[])
{
	if (argv[1] == '\0' || argv[2] == '\0')
	{
		printf("error\n");
		return (1);
	}
	else
	{
	printf("%d", mul(argv[1], argv[2]));
	}
}


int mul(int num1, int num2)
{
	int result = num1 * num2;

	return (result);
}
