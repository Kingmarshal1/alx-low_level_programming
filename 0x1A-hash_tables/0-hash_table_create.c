#include "hash_tables.h"

/**
 * hash_table_create - Creating a hash table.
 * @size: The size of the array.
 * Created by Chukwudike Igwe
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));/** size of hash table */
	if (ht == NULL)
		return (NULL);/** returning NULL */

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);/** hash node */
	if (ht->array == NULL)
		return (NULL);/** returning NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
