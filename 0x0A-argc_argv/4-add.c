#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	size_t n;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		n = 0;
		while (n < strlen(argv[j]))
		{
			if ((argv[j][n] < 48) || (argv[j][n] > 57))
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
	}
	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
