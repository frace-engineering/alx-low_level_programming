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
		write(STDERR_FILENO, "Usage: cp file_from file to", 28);
		exit(97);
	}
	if (argv[1] == NULL)
	{
		write(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE", 45);
		exit(98);
	}
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE", 45);
		exit(98);
	}
	fp1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp1 == -1)
	{
		write(2, "Error: Can't write to NAME_OF_THE_FILE", 38);
		exit(99);
	}
	fp_rd = read(fp, buff, 1024);
	if (fp_rd == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE", 45);
		exit(98);
	}
	fp_wrt = write(fp1, buff, 1024);
	if (fp_wrt == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE", 45);
		exit(98);
	}
	free(buff);
	close(fp);
	close(fp1);
	return (fp_wrt);
}


