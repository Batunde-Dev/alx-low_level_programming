#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - program that prints the numbers from 00 to 99
  *Numbers must be separated by ,followed by a space
  *Numbers should be printed in ascending order with 2 digits
  *You can only use the putchar function
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n1 = 48;
	int n2;
	int com = 44;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 56 || n2 != 57)
			{
				putchar(com);
				putchar(32);
			}
			n2 += 1;
		}
		n1 += 1;
	}
	putchar('\n');
	return (0);
}
