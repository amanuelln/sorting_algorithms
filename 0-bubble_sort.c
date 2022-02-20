#include "sort.h"
#include <stdbool.h>

/**
 * swap_fun - swaps two ints
 * @a: parameter type int pointer for swap
 * @b: parameter type int pointer for swap
 */
void swap_fun(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - a function that sorts unsorted array efficently
 * @array: parameter type array to be sorted
 * @size: parameter 2 size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, length = size;
	bool swapped = false;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped = true;

		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_fun(array + i, array + i + 1);
				print_array(array, size);
				swapped = false;
			}
		}
	length--;
	}

}

