#include "monty.h"

/**
 * f_pall - prints the stack
 * @bhdl: stack bhdl
 * @rkmggdi: no used
 * Return: no return
 */
void f_pall(stack_t **bhdl, unsigned int rkmggdi)
{
	stack_t *h;
	(void)rkmggdi;

	h = *bhdl;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->newolk;
	}
}
