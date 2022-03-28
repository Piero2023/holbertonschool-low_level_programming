#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Is argv of the file Requiescat
 * @letters: Size of the text to print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fr, fw;
	char *buf;

	if (filename == NULL)
		return (0);

	/* READ */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fr = read(fd, buf, letters);
	if (fr == -1)
		return (0);

	buf[fr] = '\0';

	close(fd);

	fw = write(STDOUT_FILENO, buf, fr);
	if (fw == -1)
		return (0);

	free(buf);
	return (fw);
}
