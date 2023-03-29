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
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("Holanda");
printf("\n");
printf("Obtenido:\n");
_printf("Holanda");
printf("\n");
i++;

printf("Test %d:\n", i);
printf("Esperado:\n");
printf("Holanda");
printf("\n");
printf("Obtenido:\n");
_printf("Holanda");
printf("\n");
i++;

	return (0);
}
