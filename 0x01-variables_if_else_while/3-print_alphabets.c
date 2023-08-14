#include <stdio.h>

/*
 * Author: Ali Usman Mohammed
 * Description: Use 'putchar' to print the aphabets in lowercase
*/

int main(void)
{
	char c = 'a';
	while(c <='z')
		{
		putchar(c);
		c++;

		}
	c = 'A';

	while(c <='Z')
		{
		putchar(c);
		}

	putchar('\n');
	return(0);

}
