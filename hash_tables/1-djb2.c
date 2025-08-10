#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_djb2 - implementing djb2
 * @str: the string of the array
 *
 * Return: an unsigned integer
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
