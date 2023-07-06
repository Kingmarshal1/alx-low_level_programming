#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Created by Chukwudike Igwe
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;/** return */
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");/** printing f */

			node = ht->array[i];/** node ht array */
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;/** node next */
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;/** comma flag */
		}
	}
	printf("}\n");/** printf next line */
}
