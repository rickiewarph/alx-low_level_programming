#include "hash_tables.h"

/**
 * hash_table_delete - func to delete a hash table.
 * @ht:points to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nod, *temp;
	unsigned long int m;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			nod = ht->array[m];
			while (nod != NULL)
			{
				temp = nod->next;
				free(nod->key);
				free(nod->value);
				free(nod);
				nod = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
