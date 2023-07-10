#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: text file to be read
 * @letters: the number of letters to be read and printed
 *
 * Return: return 0, if the filename is NULL, otherwise return
 * the number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fd;
	ssize_t b;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	y = read(fd, str, letters);
	b = write(STDOUT_FILENO, str, y);

	free(str);
	close(fd);
	return (b);
}
