#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @bhdl: stack bhdl
 * @rkmggdi: line_abofahd
 * Return: no return
 */
void f_mod(stack_t **bhdl, unsigned int rkmggdi)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", rkmggdi);
		fclose(bus.mostnd);
		free(bus.hagats);
		free_stack(*bhdl);
		exit(EXIT_FAILURE);
	}
	h = *bhdl;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", rkmggdi);
		fclose(bus.mostnd);
		free(bus.hagats);
		free_stack(*bhdl);
		exit(EXIT_FAILURE);
	}
	smma = h->newolk->n % h->n;
	h->newolk->n = smma;
	*bhdl = h->newolk;
	free(h);
}
