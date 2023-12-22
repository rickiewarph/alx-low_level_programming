#include "hash_tables.h"

/**
 * hash_table_get - func to retrieve value associated
 * using a key in a hash table.
 * @ht: points to the hash table.
 * @key: key to obtain the value of.
 * Return: NULL(cannot match key) or otherwise(value associated with ht's key)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nod;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	nod = ht->array[ind];
	while (nod && strcmp(nod->key, key) != 0)
		nod = nod->next;

	return ((nod == NULL) ? NULL : nod->value);
}
