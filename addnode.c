#include "monty.h"

/**
 * addnode - add node to the bhdl stack
 * @bhdl: bhdl of the stack
 * @n: new_value
 * Return: no return
 */
void addnode(stack_t **bhdl, int n)
{

	stack_t *abatya, *smma;

	smma = *bhdl;
	abatya = malloc(sizeof(stack_t));
	if (abatya == NULL)
	{ printf("Error\n");
		exit(0); }
	if (smma)
		smma->newdf = abatya;
	abatya->n = n;
	abatya->newolk = *bhdl;
	abatya->newdf = NULL;
	*bhdl = abatya;
}
