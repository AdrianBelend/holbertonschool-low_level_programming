#include "hash_tables.h"
/**
 * key_index - Entry point
 * @key: key
 * @size: size of the array of the hash table
 * Return: 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
