#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 or value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

