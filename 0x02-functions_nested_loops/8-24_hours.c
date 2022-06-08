#include "main.h"

/**
 * jack_bauer -prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
int a = 0;
int b;

while (a <= 23)
{
	b = 0;
while (b <= 59)
{
_putchar (a / 10 + '0');
_putchar (a % 10 + '0');
_putchar (':');
_putchar (b / 10 + '0');
_putchar (b % 10 + '0');
_putchar ('\n');
b++;
}
a++;

}

}
