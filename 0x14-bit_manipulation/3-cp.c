#include "main.h"


/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: pointer to array of arguments
 *
 * Return: count of characters copied
 */
int main(int argc, char *argv[])
{
	char *buff;
	int fp, fp1, fp_rd, fp_wrt;
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (0);
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file to\n", 28);
		free(buff);
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		close(fp);
		exit(98);
	}
	fp1 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fp1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		close(fp);
		close(fp1);
		exit(99);
	}
	while ((fp_rd = read(fp, buff, 1024)) > 0)
	{
		fp_wrt = write(fp1, buff, fp_rd);
		if (fp_wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			close(fp);
			close(fp1);
			exit(98);
		}
	}
	if (fp_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		close(fp);
		exit(98);
	}
	free(buff);
	close(fp);
	close(fp1);
	exit(fp_wrt);
}
