#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator- isdigit
 * @array: integer
 * @size: integer
 * @action: integer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action || size == 0)
		return;
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
