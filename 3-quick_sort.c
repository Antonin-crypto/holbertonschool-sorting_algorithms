#include "sort.h"

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

