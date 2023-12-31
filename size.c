#include "main.h"

/**
 * get_size - This calculates the size to cast the argument
 * @format: The formatted string in which to output the arguments
 * @i: This will provide a list of arguments to be printed.
 *
 * Return: The precision.
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}

