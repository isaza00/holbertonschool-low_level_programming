#include "hash_tables.h"

/**
 * hash_table_get -  return value for given key
 * @ht: hash table to look up in
 * @key: given key
 * return: pointer to value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}
	return (NULL);
}
