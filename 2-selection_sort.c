#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void selection_sort(int *array, size_t size) 
{
size_t i, j, min_num;

if (array == NULL || size < 2)
{
return;
}

for (i = 0; i < size - 1; i++)
{
min_num = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_num])
{
min_num = j;
}
}
if (min_num != i)
{
int temp = array[i];
array[i] = array[min_num];
array[min_num] = temp;
print_array(array, size);
}
}
}
