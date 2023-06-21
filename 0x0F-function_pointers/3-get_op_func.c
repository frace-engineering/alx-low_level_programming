#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * @get_op_func: function pointer
 * @s: pointer to chracter array
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s != "+" || s != "-" || s != "*" || s != "/" || s != "%")
	{
		return (NULL);
	}
	i = 0;
	while (ops[i] == s)
	{
		get_op_func = ops[i];
		i++;
	}
	return (0);
}

