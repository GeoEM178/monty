#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @newdf: points to the newdfious element of the stack (or queue)
 * @newolk: points to the newolk element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *newdf;
	struct stack_s *newolk;
} stack_t;

/**
 * struct bus_s - variables -args, mostnd, line hagats
 * @arg: value
 * @mostnd: pointer to monty mostnd
 * @hagats: line hagats
 * @lifi: alamf change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *mostnd;
	char *hagats;
	int lifi;
}  bus_t;

extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_abofahd);
} instruction_t;

char *_realloc(char *ptr, unsigned int hagat_zmn, unsigned int hagat_zmnsa);
ssize_t getstdin(char **hagat_qwe, int mostnd);
char  *clean_line(char *hagats);
void f_push(stack_t **bhdl, unsigned int abofahd);
void f_pall(stack_t **bhdl, unsigned int abofahd);
void f_pint(stack_t **bhdl, unsigned int abofahd);
int execute(char *hagats, stack_t **bhdl, unsigned int rkmggdi, FILE *mostnd);
void free_stack(stack_t *bhdl);
void f_pop(stack_t **bhdl, unsigned int rkmggdi);
void f_swap(stack_t **bhdl, unsigned int rkmggdi);
void f_add(stack_t **bhdl, unsigned int rkmggdi);
void f_nop(stack_t **bhdl, unsigned int rkmggdi);
void f_sub(stack_t **bhdl, unsigned int rkmggdi);
void f_div(stack_t **bhdl, unsigned int rkmggdi);
void f_mul(stack_t **bhdl, unsigned int rkmggdi);
void f_mod(stack_t **bhdl, unsigned int rkmggdi);
void f_pchar(stack_t **bhdl, unsigned int rkmggdi);
void f_pstr(stack_t **bhdl, unsigned int rkmggdi);
void f_rotl(stack_t **bhdl, unsigned int rkmggdi);
void f_rotr(stack_t **bhdl, __attribute__((unused)) unsigned int rkmggdi);
void addnode(stack_t **bhdl, int n);
void addqueue(stack_t **bhdl, int n);
void f_queue(stack_t **bhdl, unsigned int rkmggdi);
void f_stack(stack_t **bhdl, unsigned int rkmggdi);

#endif
