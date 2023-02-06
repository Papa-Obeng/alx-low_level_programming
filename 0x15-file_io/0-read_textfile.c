#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - print to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: x- actual number of bytes read and printed
 *	0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t st;
	ssize_t x;
	ssize_t y;

	st = open(filename, O_RDONLY);
	if (st == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	y = read(st, buffer, letters);
	x = write(STDOUT_FILENO, buffer, y);

	free(buffer);
	close(st);
	return (x);
}
