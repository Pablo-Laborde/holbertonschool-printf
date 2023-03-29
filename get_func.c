#include "main.h"

/*
 */
int (*get_func(char c))(buff_t*, va_list)
{
	flags_t arr[] = {
		{'s', ADD_STR}
	};

	int flags = 1;
	int i = 0;

	for (i = 0 ; i < flags ; i++)
	{
		if (arr[i].c == c)
			return (arr[i].f);
	}

	return (NULL);
}
