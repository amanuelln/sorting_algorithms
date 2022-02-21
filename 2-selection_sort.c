#include "sort.h"

/**
 * swap_fun - swaps two integers
 * @a: pointer to first integer to swap
 * @b: pointer to second integer to swap
 */

void swap_fun(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - sorts unsorted array of ints
 * @array: array of ints
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int *min_num;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_num = array + i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *min_num)/* Ternary opretor also possible*/
				min_num = array + j;
		}
		if ((array + i) != min_num)
		{
			swap_fun(array + i, min_num);
			print_array(array, size);
		}
	}	
}
