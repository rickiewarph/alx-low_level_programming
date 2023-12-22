#include "hash_tables.h"

/**
 * hash_table_set - func to add an element in a hash table.
 * @ht: points to the hash table.
 * @key: key to be added
 * @value: value associated with key.
 * Return: 0(failure) or 1(otherwise)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *qew;
	char *val_copy;
	unsigned long int index, m;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (m = index; ht->array[m]; m++)
	{
		if (strcmp(ht->array[m]->key, key) == 0)
		{
			free(ht->array[m]->value);
			ht->array[m]->value = val_copy;
			return (1);
		}
	}

	qew = malloc(sizeof(hash_node_t));
	if (qew == NULL)
	{
		free(val_copy);
		return (0);
	}
	qew->key = strdup(key);
	if (qew->key == NULL)
	{
		free(qew);
		return (0);
	}
	qew->value = val_copy;
	qew->next = ht->array[index];
	ht->array[index] = qew;

	return (1);
}
