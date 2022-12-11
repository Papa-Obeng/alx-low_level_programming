/** main- entry to the program
 * the sizeof function helps us to get the size of the datatypes
 * the printf function prints the sizes
 * the return function evaluates to zero
 */
#include <stdio.h>

int main(void)
{
	printf("Size of a char %zu\n: " sizeof(char)" byte");
	printf("Size of an int %zu\n: " sizeof(int) "bytes");
	printf("Size of a float %zu\n: " sizeof(float) "bytes");
	printf("Size of a double %zu\n: " sizeof(double) "bytes");
	return(0);
}

