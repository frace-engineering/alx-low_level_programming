#include <stdio.h>
#include <string.h>


#define CAPACITY 50000 //Size of the hash table

unsigned long hash_function(char * str)
{
	unsigned long i = 0;
	int j;

	for (j = 0; str[j]; j++)
		i += str[j];

	return i  % CAPACITY;
}

int main(int argc, char* argv[])
{
	(void)argc;
	unsigned long ket = 0;

	ket = hash_function(argv[1]);

	printf("%ld\n", ket);

	return (0);
}

