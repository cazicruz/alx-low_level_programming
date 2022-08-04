#include <stdio.h>
#include <stdarg.h>
/**
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pg;
	int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(pg, n);
	for (i = n; i != NULL; i = va_arg(pg, const unsigned int))
	{
		sum = sum + i;
	}
	return (sum);
}
