#include "sort.h"

/**
* bubble_sort - bubble sort sorting algorithm
* @array: array to be sorted
* @size: size of the array
*
* Return: always 0
*/

void bubble_sort(int *array, size_t size)
{
	int flag, k, i, j = 0;

	if (size >= 2)
	{
		for (k = 1; k < size; k++)
		{
			flag = 0;
			for (i = 0; i < size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					j = array[i];
					array[i] = array[i + 1];
					arrray[i + 1] = j;
					flag = 1;
					print_array(array, size);
				}
			}
			if (flag == 0)
			{
				break;
			}
		}
	}
}


