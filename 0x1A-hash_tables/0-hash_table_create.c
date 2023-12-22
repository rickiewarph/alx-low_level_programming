#include "hash_tables.h"

/**
 * hash_table_create - funct to creates a hash table.
 * @size: The array's sie
 * Return: If an error occurs(NULL) or
 * a pointer to the new hash table(otherwise)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int m;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		ht->array[m] = NULL;

	return (ht);
}
