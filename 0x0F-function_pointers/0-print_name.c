#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f();
}
