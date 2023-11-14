#include "monty.h"

/**
 * f_pop - prints the top
 * @bhdl: stack bhdl
 * @rkmggdi: line_abofahd
 * Return: no return
 */
void f_pop(stack_t **bhdl, unsigned int rkmggdi)
{
	stack_t *h;

	if (*bhdl == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", rkmggdi);
		fclose(bus.mostnd);
		free(bus.hagats);
		free_stack(*bhdl);
		exit(EXIT_FAILURE);
	}
	h = *bhdl;
	*bhdl = h->newolk;
	free(h);
}
