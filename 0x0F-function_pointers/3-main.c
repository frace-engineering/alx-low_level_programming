#include <stdio.h>
#include <stdlib.h>
#include "calc.h"


/**
 * main - entry point
 * @argc: number os arguments to function
 * @argv: pointer to array of arguments to main
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, ret;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != "x" || argv[2] != "-" || argv[2] != "*" || argv[2] != "/" || argv[2] != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if (((argv[2] == "/") && (argv[3] == "0")) || ((argv[2] == "%") (&& argv[3] == "0")))
	{
		printf("Error\n");
		exit(100);
	}
	ret = get_op_func(argv[2])
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", ret(a, b));
	return (0);
}
