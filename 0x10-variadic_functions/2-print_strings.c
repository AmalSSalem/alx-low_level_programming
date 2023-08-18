#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separates
 * @n: num of arg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char);
		if (!separator || i == 0)
		{	printf("%s", string);
			continue;
		}
		else if (string == NULL)
			string = "(nil)";

		printf("%s%s", separator, string);
	}
	va_end(list);
}
