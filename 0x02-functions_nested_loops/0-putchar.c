#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set approprietely.
 */

int main(void)
{
	char ch[8] = "_putchar";
	int i = o;
	char c;

	while (i<= 8)
	{
		c = ch[i];
		_putchar(c);
		i++;

	}
	_putchar('\n');
	returne(0);

}


int _putchar(char c)
{
	return (write(1, &c, 1));
}
