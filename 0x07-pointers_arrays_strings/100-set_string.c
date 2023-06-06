#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * set_string - sets the value os a pointer to a char
 * @s: pointer to a string
 * @to: pointer to a char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
