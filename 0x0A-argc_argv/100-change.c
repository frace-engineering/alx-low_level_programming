#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * change - print the minimum number of coin to make change for
 * any amount of money
 * @cent: value of money to given
 * Return: Always 0(Success)
 */
int change(int cent)
{
	int coin[5] = {25, 10, 5, 2, 1};
	int i, j = 0;
	int coinlist[5] = {0};

	for (i = 0; i < 5; i++)
	{
		while (cent >= coin[i])
		{
			cent -= coin[i];
			coinlist[j++] = coin[i];
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", coinlist[i]);
	}
	printf("\n");
	exit(EXIT_SUCCESS);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to array of argument
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("%d", 0);
	}
	change(atoi(argv[1]));
	exit(EXIT_SUCCESS);
}
