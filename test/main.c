#include "../main.h"
#include <stdio.h>

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

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("\%%c", '\0');
printf("\n");
printf("Obtenido:\n");
_printf("\%%c", '\0');
printf("\n");
printf("\n");
i++;

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

	return (0);
}
