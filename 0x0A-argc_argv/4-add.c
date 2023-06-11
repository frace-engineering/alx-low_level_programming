#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else if (argc > 1)
	{
	for (j = 1; j < argc; j++)
	{
		if (!(atoi(argv[j])))
		{
			printf("Error\n");
			return (1);
		}
	}

	sum = 0;
	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
	}
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
