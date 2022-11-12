#include "sort.h"

/**
* selection_sort - function for selection sorting aglorithm
* @array: array to sorted
* @size: size of the array
* Return: always 0
*/

void selection_sort(int *array, size_t size)
{
	int i, j, k, temp = 0, Min = 0;

	for (i = 0; i < size - 1; i++)
	{
		Min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[i] < array[Min])
			{
				Min = j;
			}
		}
		temp = array[i];
		array[i] = array[Min];
		array[Min] = temp;
		for (k = 0; k < size; k++)
		{
			printf("%d", array[k]);
		}
	}
}


