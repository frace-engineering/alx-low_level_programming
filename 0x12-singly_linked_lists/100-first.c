#include "lists.h"


/**
 * before_main - executes a program before main is executed
 *
 * Return: Void
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
