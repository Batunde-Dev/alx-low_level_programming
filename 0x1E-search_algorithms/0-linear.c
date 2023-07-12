#include "search_algos.h"
/**
* A function that searches for a value in an
* array of integers using the Linear search algorithm
* array = is a pointer to the first element of the array to search in
* size = is the number of elements in array
* value = is the value to search for
* Return: first index OR -1
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
