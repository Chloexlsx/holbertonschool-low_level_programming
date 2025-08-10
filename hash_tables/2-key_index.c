#include "hash_tables.h"

/**
 * key_index - Get the index for a key in a hash table array
 * @key: the key (as bytes)
 * @size: size of the hash table array
 *
 * Return: index at which the key/value should be stored
 */
unsigned long int key_index(const unsigned char *key,
unsigned long int size)
{
	return (hash_djb2(key) % size);
}
