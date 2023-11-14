#include "monty.h"

/**
 * f_swap - adds the top two elements of the stack.
 * @bhdl: stack bhdl
 * @rkmggdi: line_abofahd
 * Return: no return
 */
void f_swap(stack_t **bhdl, unsigned int rkmggdi)
{
	stack_t *h;
	int maftohi = 0, smma;

	h = *bhdl;
	while (h)
	{
		h = h->newolk;
		maftohi++;
	}
	if (maftohi < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", rkmggdi);
		fclose(bus.mostnd);
		free(bus.hagats);
		free_stack(*bhdl);
		exit(EXIT_FAILURE);
	}
	h = *bhdl;
	smma = h->n;
	h->n = h->newolk->n;
	h->newolk->n = smma;
}
