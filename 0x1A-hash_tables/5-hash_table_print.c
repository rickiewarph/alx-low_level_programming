#include "hash_tables.h"

/**
 * hash_table_print -func printing a hash table.
 * @ht: points to the hash table to be printed.
 * Description: Key or value pairs are to be printed in the order they appear
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nod;
	unsigned long int m;
	unsigned char com_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			if (com_flag == 1)
				printf(", ");

			nod = ht->array[m];
			while (nod != NULL)
			{
				printf("'%s': '%s'", nod->key, nod->value);
				nod = nod->next;
				if (nod != NULL)
					printf(", ");
			}
			com_flag = 1;
		}
	}
	printf("}\n");
}
