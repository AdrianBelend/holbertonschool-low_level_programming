#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = size - 1, c, pivot;

	if (!array)
	{
		return (-1);
	}
	while (a <= b)
	{
		pivot = (a + b) / 2;
		printf("Searching in array: ");
		for (c = a; c <= b; c++)
		{
			if (c < b)
			{
				printf("%d, ", array[c]);
			}
			else
				printf("%d", array[c]);
		}
		printf("\n");
		if (array[pivot] == value)
			return (pivot);
		if (array[pivot] < value)
			a = pivot + 1;
		else
			b = pivot - 1;
	}
	return (-1);
}
