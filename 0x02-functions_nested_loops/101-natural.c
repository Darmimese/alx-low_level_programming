#include <stdio.h>
/**
 * main - main block
 * Description: list all natural numbers and add them
 * Return:0
 */
int main(void)
{
	int x = 3;
	int sum = 0;
		while (x < 1024)
		{
			if (x % 3 == 0 || x % 5 == 0)
			{
				sum = sum + x;
			}
			x++;
		}
		printf("%i\n", sum);
		return (0);
}
