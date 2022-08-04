#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *
 */

int (*get_op_func(char *s))(int, int)
{
	if (s == '+')
	{
		get_op_func = op_add;
	}
	else if (s == '-')
	{
		get_op_func = op_sub;
	}
	else if (s == '*')
	{
		get_op_func = op_mul;
	}
	else if (s == '/')
	{
		get_op_func = op_div;
	}
	else (s == '%')
	{
		get_op_func = op_mod;
	}
}
