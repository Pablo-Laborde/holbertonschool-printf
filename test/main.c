#include "main.h"
#include <stdio.h>

int main(void)
{
	_printf("a-Prueba\n");
	printf("z-Prueba\n");
	_printf("");
	printf("");
	_printf("%");
	printf("%");
	_printf("a-%%");
	printf("\n");
	printf("z-%%");
	_printf("a-Hola % Hola");
	printf("z-Hola % Hola");
	_printf("\nem\na--AcA--\n----\n");
	printf("z--AcA--\n----\n");
	_printf("a-Salto de linea.\n");
	printf("z-Salto de linea.\n");

	_printf("\n\n\n\n\n");

	_printf("a-como");
	printf("z-como");
	_printf("a-Hola%");
	printf("z-Hola%");
	printf("\n");

	return (0);
}
