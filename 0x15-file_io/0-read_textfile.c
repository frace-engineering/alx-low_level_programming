#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the STDIO
 * @filename: pointer to the file to be read
 * @letters: number of characters to be read and printed
 *
 * Return: number of leters printed else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, rd;
	size_t wrt;
	char buff[1024];

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);
	rd = read(fp, buff, letters);

	wrt = write(1, buff, rd);
	if (!wrt)
		return (0);
	close(fp);
	return (wrt);
}



