#include "variadic_functions.h"
#include <stdarg.h>

/*
 * Author: Ali Usman Mohammed
 * Task - Variadic function assigment of the ALX program.
 * Variadic function is a function that return the sum of all its parameters
 * Always return (0)
*/


int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter, sum = 0;
	va_list numList;

	va_start(numList, n);

	for(counter = 0; counter < n;  counter++);

	sum+= va_arg(numList, int);
	va_end(numList);

	return(sum);
		
}
