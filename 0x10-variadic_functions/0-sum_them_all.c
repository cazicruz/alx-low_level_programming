#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pg;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(pg, n);
	for (i = 0; i > n; i++)
	{
		sum += va_arg(pg, int);
	}
	va_end(pg);
	return (sum);
}
