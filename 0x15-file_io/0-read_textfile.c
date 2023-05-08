#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text files that prints to STDOUT.
 * @filename: text file being read only
 * @letters: no. of letters to be read
 * Created by Chukwudike Igwe
 * Return: w- actual number of bytes read and printed
 * when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY); /** The file name is read only */
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters); /** malloc size of characters */
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);/** free buff */
	close(fd);
	return (w);
}
