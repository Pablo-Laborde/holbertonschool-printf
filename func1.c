#include "main.h"

/**
 * to_bin- transforms a decimal number to binary and loads it to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
 * Return: void
 */
void to_bin(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	unsigned int num;
	char number[32];

	/* code */
	num = va_arg(ap, int);
	if (num == 0)
		half_load(b, '0');
	for (i = 31; i >= 0; i--)
	{
		number[i] = (num % 2) + '0';
		num /= 2;
	}
	i = 0;
	while (number[i] != '1')
		i++;
	while (i < 32)
		fast_load(b, number, &i);
}

/**
 * to_oct- transforms a decimal number to octal and loads it to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
 * Return:
 */
void to_oct(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	unsigned int num;
	char number[11];

	/* code */
	num = va_arg(ap, int);
	if (num == 0)
		half_load(b, '0');
	for (i = 10; i >= 0; i--)
	{
		number[i] = (num % 8) + '0';
		num /= 8;
	}
	i = 0;
	while (number[i] == '0')
		i++;
	while (i < 11)
		fast_load(b, number, &i);
}

/**
 * to_hex- transforms a decimal number to hexadecimal lowercase
 * and loads it to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
 * Return: void
 */
void to_hex(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	unsigned int num, aux;
	char number[8];
	char values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'};

	/* code */
	num = va_arg(ap, int);
	if (num == 0)
		half_load(b, '0');
	for (i = 7; i >= 0; i--)
	{
		aux = num % 16;
		number[i] = values[aux];
		num /= 16;
	}
	i = 0;
	while (number[i] == '0')
		i++;
	while (i < 8)
		fast_load(b, number, &i);
}

/**
 * to_heX- transforms a decimal number to hexadecimal uppercase
 * and loads it to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
 * Return: void
 */
void to_heX(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	unsigned int num, aux;
	char number[8];
	char values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'A', 'B', 'C', 'D', 'E', 'F'};

	/* code */
	num = va_arg(ap, int);
	if (num == 0)
		half_load(b, '0');
	for (i = 7; i >= 0; i--)
	{
		aux = num % 16;
		number[i] = values[aux];
		num /= 16;
	}
	i = 0;
	while (number[i] == '0')
		i++;
	while (i < 8)
		fast_load(b, number, &i);
}
