#include "main.h"

/**
 * read_textfile - read a text file and prints it to POSIX standard output
 * @filename: text file to be read
 * @letters: the number of letters to be read and printed
 * Return: return 0, if the filename is NULL,
 * otherwise return the number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fd, w, r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	r = read(fd, str, letters);
	w = write(STDOUT_FILENO, str, r);

	free(str);
	close(fd);
	return (w);
}
