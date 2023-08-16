#include <stdio.h>
#include "function_pointers.h"
/*
 * Author: Ali Usman Mohammed
 * Main: function that prints a name.
 * Always return (0)
 */
	void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}
