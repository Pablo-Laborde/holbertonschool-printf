#include "main.h"

/**
* ADD_CHAR- adds a char to the buffer
* @b: pointer to buff_t, the struct which contains the buffer to be printed
* @ap: the argument list
* Return: void
*/
void ADD_CHAR(buff_t *b, va_list ap)
{
	/* var declaration */
	char c;

	/* code */
	c = va_arg(ap, int);
	half_load(b, c);
}

/**
 * ADD_STR- adds a str to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
 * Return: void
 */
void ADD_STR(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	char *s;

	/* code */
	i = 0;
	s = va_arg(ap, char*);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
		fast_load(b, s, &i);
}

/**
 * ADD_INT- adds a int to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
 * Return:void
 */
void ADD_INT(buff_t *b, va_list ap)
{
	/* var declaration */
	int i, num;
	char digits[11];

	/* code */
	num = va_arg(ap, int);
	int_to_char(num, digits);
	if (num < 0)
		half_load(b, '-');
	i = 0;
	while (digits[i] != '\0')
		fast_load(b, digits, &i);
}

/**
 * ADD_UI- adds an unsigned int to the buffer
 * @b: pointer to buff_t, the struct which contains the buffer to be printed
 * @ap: the argument list
 * Return: void
 */
void ADD_UI(buff_t *b, va_list ap)
{
	/* var declaration */
	int i;
	unsigned int num;
	char digits[11];

	/* code */
	num = va_arg(ap, int);
	ui_to_char(num, digits);
	i = 0;
	while (digits[i] != '\0')
		fast_load(b, digits, &i);
}
