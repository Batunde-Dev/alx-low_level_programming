#include "hash_tables.h"
/**
* hash_table_create - create a new hash table
* @size: size of the array
* Return: a pointer to the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *new_hash_tab = malloc(sizeof(hash_table_t));

	if (!new_hash_tab)
		return (NULL);
	new_hash_tab->array = malloc(sizeof(hash_node_t **) * size);
	if (!new_hash_tab->array)
	{
		free(new_hash_tab);
		return (NULL);
	}
	while (index < size)
	{
		new_hash_tab->array[index] = NULL;
		index++;
	}
	new_hash_tab->size = size;
	return (new_hash_tab);
}
