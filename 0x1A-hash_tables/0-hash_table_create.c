#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Is the size of the array
 * Return: A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size); /*=3071*/
	if (table->array == NULL)
		return (NULL);


	return (table);
}
