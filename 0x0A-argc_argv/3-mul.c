#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to array of arguments
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	(void)mul;
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	exit(EXIT_SUCCESS);
}
