#include "main.h"

/**
 * ADD_ADR- adds an address to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
 */
void ADD_ADR(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	unsigned long int adr;
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
		adr_to_char(adr, address);
		while (address[i] == '0')
			i++;
		half_load(b, '0');
		half_load(b, 'x');
		while (address[i] != '\0')
			fast_load(b, address, &i);
	}
}

/**
 * ADD_PSTR- adds a str to the buffer, but changing some special chars
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
 * Return: void
 */
void ADD_PSTR(buff_t *b, va_list ap)
{
	/* var declaration */
	int i, j, val;
	char *s;
	char h_val[7];

	/* code */
	i = 0;
	s = va_arg(ap, char*);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			h_val[6] = '\0';
			half_load(b, '\\');
			half_load(b, 'x');
			val = s[i];
			for (j = 5; j >= 0; j--)
			{
				h_val[j] = val % 16;
				val /= 16;
			}
			j = 0;
			while (h_val[j] != '\0')
				fast_load(b, h_val, &j);
		}
		else
			fast_load(b, s, &i);
}

/**
 * REV_STR- adds a reversed str to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
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
 * ROT_STR- adds a rotated str to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
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
