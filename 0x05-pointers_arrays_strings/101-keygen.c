#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *password;
	int length;
	int i;
	char *upper, *lower, *digit, *symbol;
	int digit_length, upper_length, lower_length, symbol_length, char_type;

	length = 6;
	password = malloc(sizeof(char) * 6);
	if (password == NULL)
	{
	       printf("Error with malloc");
	       return (-1);
	}
	upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
       	upper_length = strlen(upper);

	lower = "abcdefghijklmnopqrstuvwxyz";
	lower_length = strlen(lower);

	digit = "0123456789";
	digit_length = strlen(digit);

	symbol = "@!$%^&*";
	symbol_length = strlen(symbol);

	srand(time(0) * getpid());
	char_type = rand() % 4;

	for (i = 0; i < length; i++)
	{
		if (char_type == 0)
		{
			password[i] = upper[rand() % upper_length];
		}
		if (char_type == 1)
		{
			password[i] = lower[rand() % lower_length];
		}
		if (char_type == 2)
		{
			password[i] = symbol[rand() % symbol_length];
		}
		if (char_type == 3)
		{
			password[i] = digit[rand() % digit_length];
		}
	}
	password[i] = '\0';
	printf("%s", password);
	printf("\n");
	return (0);
}


