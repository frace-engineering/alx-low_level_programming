#include "main.h"


int write_fd(int fd, int fd1);
/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: pointer to array of arguments
 *
 * Return: count of characters copied
 */

int main(int argc, char *argv[])
{
	int fd, fd1, cf, cf1, fd_wrt;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fd_wrt = write_fd(fd, fd1);
	if (fd_wrt == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (fd_wrt == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(99);
	}

	cf = close(fd);
	if (cf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	cf1 = close(fd1);
	if (cf1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
/**
 * write_fd - copy text from one file to the other
 * @fd: file descriptor of file one
 * @fd1: second file descriptor
 *
 * Return: number of characters written
 */
int write_fd(int fd, int fd1)
{
	char buff[1024];
	int rd;
	int wrt_fd;

	while ((rd = read(fd, buff, 1024)) > 0)
	{
		wrt_fd = write(fd1, buff, rd);
		if (wrt_fd < 0)
		{
			return (1);
		}
	}
	if (rd < 0)
	{
		return (2);
	}
	return (wrt_fd);
}
