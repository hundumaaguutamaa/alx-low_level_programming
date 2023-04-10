#include "main.h"

/**
 * read_textfile - Reads a text file and prints the letters
 * @filename: File name.
 * @letters: Numbers of letters printed.
 *
 * Return: Numbers of letters printed. If fails, Returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nprint;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nread = read(fd, buf, letters);
	nprint = write(STDOUT_FILENO, buf, nread);

	close(fd);

	free(buf);

	return (nprint);
}

