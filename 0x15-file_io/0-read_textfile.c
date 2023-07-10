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
	int wrt;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
	{
		free(buff);
		return (0);
	}
	rd = read(fp, buff, letters);
	if (rd < 0)
		return (-1);

	wrt = write(1, buff, rd);
	if (wrt < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fp);
	return (wrt);
}



