#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return:  the value associated with the element,
 * or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i;
	hash_node_t *tmp;

	if (!ht)
		return (NULL);
	i = 0;
	while (tmp)
	{
		if (key == tmp->key)
		{
			return (tmp->value);
		}
		tmp = ht->array[i];
		i++;
	}
	return (NULL);
}
