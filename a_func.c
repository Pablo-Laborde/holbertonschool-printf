#include "main.h"

/**
 * int_to_char- function
 * @num: input
 * @digits: input
 * Return: void
 */
void int_to_char(int num, char *digits)
{
	/* var declaration */
	int i, aux, aux2, length;

	/* code */
	if (num == 0)
	{
		digits[0] = '0';
		digits[1] = '\0';
	}
	else /* (num != 0) */
	{
		length = 0;
		aux = num;
		while (aux != 0)
		{
			aux /= 10;
			length++;
		}
		digits[length] = '\0';
		i = length - 1;
		aux = num;
		while (aux != 0)
		{
			if (aux > 0)
				aux2 = (aux % 10);
			else
				aux2 = (aux % 10) * -1;
			digits[i] = aux2 + '0';
			aux /= 10;
			i--;
		}
	}
}

/**
 * ui_to_char- function
 * @num: input
 * @digits: input
 * Return: void
 */
void ui_to_char(unsigned int num, char *digits)
{
	/* var declaration */
	int i, length;
	unsigned int aux;

	/* code */
	aux = num;
	if (num == 0)
		length = 1;
	else
	{
		length = 0;
		while (aux > 0)
		{
			aux /= 10;
			length++;
		}
	}
	digits[length] = '\0';
	i = length - 1;
	aux = num;
	do {
		digits[i] = (aux % 10) + '0';
		aux /= 10;
		i--;
	} while (aux != 0);
}

/**
 * adr_to_char function
 * @num: input
 * @address: input
 * Return: void
 */
void adr_to_char(long int num, char *address)
{
	/* var declaration */
	int i, aux;
	char values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'};

	/* code */
	address[16] = '\0';
	for (i = 15; i >= 0; i--)
	{
		aux = num % 16;
		address[i] = values[aux];
		num /= 16;
	}
}
