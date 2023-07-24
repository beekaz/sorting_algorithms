#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t n, counter, new_counter;
	int swap;
	
	if (array == NULL || size <2)
		return;

	counter = size;
	while(counter>0)
	{
		n = 0;
		new_counter =0;
		while (n < counter-1)
		{
			if (array[n] > array[n +1])
			{
				swap = array[n];
				array[n] = array[n +1];
				array[n + 1] = swap;
				new_counter = n + 1;
				print_array(array, size);
			}
			n++;
		}
	counter = new_counter;
	}
}
