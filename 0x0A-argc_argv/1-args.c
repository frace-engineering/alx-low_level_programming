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
	(void)argv;
	if (argc > 0)
		printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
