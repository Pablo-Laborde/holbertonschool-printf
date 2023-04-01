#include "main.h"

/**
 * get_func- looks for the correct function for each placeholder
 * @c: the char wihch is associated the placeholder expected
 * Return: return the correct function pointer if it exists, NULL otherwise
 */
void (*get_func(char c))(buff_t*, va_list)
{
	/* var declaration */
	int i;
	flags_t fl[] = {
		{'c', ADD_CHAR},
		{'s', ADD_STR},
		{'i', ADD_INT},
		{'d', ADD_INT},
		{'u', ADD_UI},
		{'b', to_bin},
		{'o', to_oct},
		{'x', to_hex},
		{'X', to_heX},
		{'p', ADD_ADR},
		{'S', ADD_PSTR},
		{'r', REV_STR},
		{'R', ROT_STR},
		{'\0', NULL},
	};

	/* code */
	i = 0;
	while (fl[i].c != '\0')
	{
		if (fl[i].c == c)
			return (fl[i].f);
		i++;
	}
	return (NULL);
}
