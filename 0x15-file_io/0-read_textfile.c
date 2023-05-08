#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	size_t file;
	size_t r;
	size_t w;

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	r = read(file, c, letters);
	w = write(STDOUT_FILENO, c, r);

	free(c);
	close(file);

return (w);
}
