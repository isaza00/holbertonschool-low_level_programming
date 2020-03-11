#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator- isdigit
 * @array: integer
 * @size: integer
 * @action: integer
 * Return: prints alphabet
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	size_t i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
