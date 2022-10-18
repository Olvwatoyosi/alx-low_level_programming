#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints two digits combination
 * Return: Always 0
 */
int main(void)
{
	int d, g;

	for (d = 0; d <= 9; d++)
	{
		for (g = 0; g <= 9; g++)
		{
			if (d < g)
			{
				putchar(d);
				putchar(g);

				if (d != 8 || (d == 8 && g != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
