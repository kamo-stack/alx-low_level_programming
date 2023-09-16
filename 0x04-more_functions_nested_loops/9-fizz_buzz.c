#include "main.h"

/**
 * main - prints the number from from 1 to 100, followed by the new line
 * but for multiplesof three prints fizz intsead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if  (i % 3 == 0 && i % 5 != 0)
		{
			_putchar(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
	      		_putchar(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar(" FizzBuzz");
		}
		else if (i == 1)
		_putchar("%d", i);
		else
		{
			_putchar(" %d", i);
		}
		_putchar("\n");

		return (0);
	}
}
