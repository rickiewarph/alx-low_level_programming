#include "hash_tables.h"

/**
 * key_index - func to locate the index at which a
 * key or value pair is to be stored in array of a hash table.
 * @key: key to find the index of.
 * @size: The array size of the hash table.
 * Return: The key index.
 * Description: Utilizes the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
