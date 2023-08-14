#include <stdio.h>

/*
 *Author:Ali Usman Mohammed 
 *Description: Use 'putchar' function to print the alphabet in lowercase 
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return(0);
}
