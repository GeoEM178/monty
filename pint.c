#include "monty.h"

/**
 * f_pint - prints the top
 * @bhdl: stack bhdl
 * @rkmggdi: line_abofahd
 * Return: no return
 */
void f_pint(stack_t **bhdl, unsigned int rkmggdi)
{
	if (*bhdl == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", rkmggdi);
		fclose(bus.mostnd);
		free(bus.hagats);
		free_stack(*bhdl);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*bhdl)->n);
}
