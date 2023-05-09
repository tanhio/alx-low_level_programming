#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *c);
void close_file(int file);
/**
 * create_buffer - allocates 1024 bytes
 * @c: a pointer to the file
 * Return: a pointer to the newly allocated buffer
 */
char *create_buffer(char *c)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", c);
		exit(99);
	}

return (buffer);
}
/**
 * close_file - closes file descriptors
 * @file: the file
 */
void close_file(int file)
{
	int i;

	i = close(file);

	if (i == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
 * main - copies a file
 * @argc: number of arguments
 * @argv: an array of pointers as arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(srgv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

return (0);
}
