#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: size of the array
 * Return: return a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hat;
	unsigned long int i;

	hat = malloc(sizeof(hash_table_t));
	if (hat == NULL)
		return (NULL);

	hat->size = size;
	hat->array = malloc(sizeof(hash_node_t *) * size);
	if (hat->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hat->array[i] = NULL;

	return (hat);
}
