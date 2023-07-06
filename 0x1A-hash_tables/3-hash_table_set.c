#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Created by Chukwudike Igwe
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);/** Returning 0 */

	value_copy = strdup(value);/** value copy */
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);/** free ht array value */
			ht->array[i]->value = value_copy;
			return (1);/** returning 1 */
		}
	}

	new = malloc(sizeof(hash_node_t));/** size of hash node */
	if (new == NULL)
	{
		free(value_copy);
		return (0);/** returning 0 */
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);/** free new */
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;/** ht array index */

	return (1);/** returning 1 */
}
