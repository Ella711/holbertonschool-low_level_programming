#include "search_algos.h"
/**
 * print_array - prints the current array it's searching
 * @array: array of ints
 * @left: left index of array
 * @right: last index of array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0, left = 0, right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
