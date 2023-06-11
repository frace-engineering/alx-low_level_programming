#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to array of argument
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{	
	char change[] = {25, 10, 5, 2, 1};
	int i;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	b = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (b / change[i] > 0)
		{
			printf("%d ", change[i]);
		}
		if (b % change[i] != 0)
			b = b % change[i];
		for (i = 1; i <= 5; i++)
		{
			if (b / change[i] != 0)
			{
				printf("%d ", change[i]);
			}
			if (b % change[i] != 0)
				b = b % change[i];
			for (i = 2; i < 5; i++)
			{
				if (b / change[i] != 0)
				{
					printf("%d ", change[i]);
				}
				if (b % change[i] != 0)
					b = b % change[i];
				for (i = 3; i < 5; i++)
				{
					if (b / change[i] != 0)
					{
						printf("%d ", change[i]);
					}
					if (b % change[i] != 0)
						b = b % change[i];
					for (i = 4; i < 5; i++)
					{
						if (b / change[i] != 0)
						{
							printf("%d ", change[i]);
						}
					}
				}
			}
		}
	}
	printf("\n");
	exit(EXIT_SUCCESS);
}
