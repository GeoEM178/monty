#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @bhdl: stack bhdl
 * @rkmggdi: line_abofahd
 * Return: no return
 */
void f_pstr(stack_t **bhdl, unsigned int rkmggdi)
{
	stack_t *h;
	(void)rkmggdi;

	h = *bhdl;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->newolk;
	}
	printf("\n");
}
