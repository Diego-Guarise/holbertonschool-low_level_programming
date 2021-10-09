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
	char *vk;

	if (!ht)
		return (NULL);
	
	i = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[i])
		return (NULL);

	tmp = ht->array[i];
	while (tmp)
	{
		if (key == tmp->key)
		{
			vk = strdup(tmp->value);
			return (vk);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
