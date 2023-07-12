#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that creates a buffer
 * @file: the pointer to the buffer to be created
 * Return: string created
 */
char *create_buffer(char *file)
{
	char *str;

	str = malloc(sizeof(char) * 1024);
	if (str == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(99);
	}
	return (str);
}
/**
 * close_file - function that closes a file
 * @fd: the file to be closed
 */
void close_file(int fd)
{
	int i ;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close to %d\n", fd);
		exit(100);
	}
}
/**
 * main - program that copies a file to another
 * @argc: number of argument
 * @argv: value of argument
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int f, to, r, w;
	char *buffer;

	if (argc < 3 || argc > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	do
	{
	buffer = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(f, buffer, 1024 );
	if (f == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to\n");
                exit(98);
	}
	w = write(to, buffer, r);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to\n");
                        exit(99);
	}
	} while (r > 0);
	free(buffer);
	close_file(f);
	close_file(to);
	return (0);
}
