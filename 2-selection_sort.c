#include "sort.h"
#include "stdlib.h"
/**
 * swap - Swaps two elements of an array
 * @a: Integer a
 * @b: Integer b
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, index, minIndex;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;

		for (index = i + 1; index < size; index++)
		{
			if (array[index] < array[minIndex])
			{
				minIndex = index;
			}
		}
		if (minIndex != i)
		{
			swap(&array[i], &array[minIndex]);
			print_array(array, size);
		}
	}
}
