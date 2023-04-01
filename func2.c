#include "main.h"

/**
 * ADD_ADR- functions
 * @b: input
 * @ap: input
 */
void ADD_ADR(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	long int adr;
	char *null;
	char address[17];

	/* code */
	adr = va_arg(ap, long int);
	null = "(nil)";
	i = 0;
	if (adr == 0)
		while (null[i] != '\0')
			fast_load(b, null, &i);
	else
	{
		address[16] = '\0';
		adr_to_char(adr, address);
		while (address[i] == '0')
			i++;
		while (address[i] != '\0')
			fast_load(b, address, &i);
	}
}

/**
 * REV_STR- function
 * @b: input
 * @ap: input
 */
void REV_STR(buff_t *b, va_list ap)
{
	/* var declaration */
	int i, j;
	char *s;

	/* code */
	s = va_arg(ap, char*);
	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
		i++;
	j = 1;
	while (j <= i)
	{
		half_load(b, s[i - j]);
		j++;
	}
}

/**
 * ROT_STR- function
 * @b: input
 * @ap: input
 * Return: void
 */
void ROT_STR(buff_t *b, va_list ap)
{
	/* var declaration */
	int i, key, aux;
	char *s, rot;

	/* code */
	key = 13;
	s = va_arg(ap, char*);
	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			aux = ((s[i] - 'a') + key) % 26;
			rot = 'a' + aux;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			aux = ((s[i] - 'A') + key) % 26;
			rot = 'A' + aux;
		}
		else
			rot = s[i];
		half_load(b, rot);
		i++;
	}
}
