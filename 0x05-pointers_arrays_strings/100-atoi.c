#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The pointer to convert
 * Return: converted integer from string
 */

int _atoi(char *s)
{
	unsigned in num = 0;
	int sign = 1;

	do {
		if (*s == '_')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
