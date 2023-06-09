#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int args;

	args = 0;
	while (args < argc)
	{
		printf("%s\n", argv[args++]);
	}

	exit(EXIT_SUCCESS);
}
