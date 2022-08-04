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
	for (i = n; i != NULL; i = va_arg(pg, int))
	{
		sum = sum + i;
	}
	return (sum);
}
