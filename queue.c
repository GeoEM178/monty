#include "monty.h"

/**
 * f_queue - prints the top
 * @bhdl: stack bhdl
 * @rkmggdi: line_abofahd
 * Return: no return
 */
void f_queue(stack_t **bhdl, unsigned int rkmggdi)
{
	(void)bhdl;
	(void)rkmggdi;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @bhdl: bhdl of the stack
 * Return: no return
 */
void addqueue(stack_t **bhdl, int n)
{
	stack_t *abatya, *smma;

	smma = *bhdl;
	abatya = malloc(sizeof(stack_t));
	if (abatya == NULL)
	{
		printf("Error\n");
	}
	abatya->n = n;
	abatya->newolk = NULL;
	if (smma)
	{
		while (smma->newolk)
			smma = smma->newolk;
	}
	if (!smma)
	{
		*bhdl = abatya;
		abatya->newdf = NULL;
	}
	else
	{
		smma->newolk = abatya;
		abatya->newdf = smma;
	}
}
