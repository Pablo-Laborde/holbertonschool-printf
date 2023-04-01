#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{

int i = 1;


printf("Test %d:\n", i);
printf("Esperado:\n");
printf("Holanda");
printf("\n");
printf("Obtenido:\n");
_printf("Holanda");
printf("\n\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("Portugal\n");
printf("Obtenido:\n");
_printf("Portugal\n");
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%");
printf("\n");
printf("Obtenido:\n");
_printf("%");
printf("\n\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("USA e%");
printf("\n");
printf("Obtenido:\n");
_printf("USA e%");
printf("\n\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("Uruguay e%\n");
printf("Obtenido:\n");
_printf("Uruguay e%\n");
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("Hola%k\n");
printf("Obtenido:\n");
_printf("Hola%k\n");
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("Ya sab%c\n", 'e');
printf("Obtenido:\n");
_printf("Ya sab%c\n", 'e');
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("Ya sab %s\n", "Hola");
printf("Obtenido:\n");
_printf("Ya sab %s\n", "Hola");
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("Ya sab %s\n", NULL);
printf("Obtenido:\n");
_printf("Ya sab %s\n", NULL);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%%c\n");
printf("Obtenido:\n");
_printf("%%c\n");
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%c", '\0');
printf("\n");
printf("Obtenido:\n");
_printf("%c", '\0');
printf("\n");
printf("\n");
i++;

/*
printf("Test %d:\n", i);
printf("Esperado:\n");
printf("\%%c", '\0');
printf("\n");
printf("Obtenido:\n");
_printf("\%%c", '\0');
printf("\n");
printf("\n");
i++;
*/

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%i\n", 5);
printf("Obtenido:\n");
_printf("%i\n", 5);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%d\n", 137);
printf("Obtenido:\n");
_printf("%d\n", 137);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%i\n", -5);
printf("Obtenido:\n");
_printf("%i\n", -5);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%d\n", -137);
printf("Obtenido:\n");
_printf("%d\n", -137);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%d\n", 0);
printf("Obtenido:\n");
_printf("%d\n", 0);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%d\n", -0);
printf("Obtenido:\n");
_printf("%d\n", -0);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%b\n", 0);
printf("Obtenido:\n");
_printf("%b\n", 0);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%b\n", 64);
printf("Obtenido:\n");
_printf("%b\n", 64);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%b\n", 345657);
printf("Obtenido:\n");
_printf("%b\n", 345657);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%u\n", -1);
printf("%u\n", 0);
printf("%u\n", 1);
printf("%u\n", 123456789);
printf("%u\n");
printf("Obtenido:\n");
_printf("%u\n", -1);
_printf("%u\n", 0);
_printf("%u\n", 1);
_printf("%u\n", 123456789);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%o\n", -128);
printf("%o\n", -1);
printf("%o\n", 0);
printf("%o\n", 1);
printf("%o\n", 128);
printf("%o\n", 345657);
printf("%o\n", 5666777888);
printf("Obtenido:\n");
_printf("%o\n", -128);
_printf("%o\n", -1);
_printf("%o\n", 0);
_printf("%o\n", 1);
_printf("%o\n", 128);
_printf("%o\n", 345657);
_printf("%o\n", 5666777888);
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%r\n", "HOLA");
printf("Obtenido:\n");
_printf("%r\n", "HOLA");
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("%R\n", "HOLAZ holaz");
printf("Obtenido:\n");
_printf("%R\n", "HOLAZ holaz");
printf("\n");
i++;

printf("Test %d:\n", i);
long int j;
j = 0;
while (j >= 0)
{
	printf("%p - ", j);
	_printf("%p", j);
	printf("\n");
	j++;
}
printf("\n");
i++;
	return (0);
}
