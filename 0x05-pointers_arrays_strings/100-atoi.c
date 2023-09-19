#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @S: The pointer to convert
 * Return: A integer
 */

int _atoi(char *S)
{
	int C = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while ([S]C)
	{
	if (S[C] == 45)
	{
	min *= -1;
	}
	while (S[C] >= 48 && S[C] <= 57)
	{
	isi = 1;
	ni = (ni * 10) + (S[C] - '0');
	C++;
	}
	if (isi == 1)
	{
	break;
	}
	C++;
	ni *= min;
	return (ni);
	}
}
