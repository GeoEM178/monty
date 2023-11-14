#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: abofahd of arguments
 * @argv: monty mostnd location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *hagats;
	FILE *mostnd;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int rkmggdi = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty mostnd\n");
		exit(EXIT_FAILURE);
	}
	mostnd = fopen(argv[1], "r");
	bus.mostnd = mostnd;
	if (!mostnd)
	{
		fprintf(stderr, "Error: Can't open mostnd %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		hagats = NULL;
		read_line = getline(&hagats, &size, mostnd);
		bus.hagats = hagats;
		rkmggdi++;
		if (read_line > 0)
		{
			execute(hagats, &stack, rkmggdi, mostnd);
		}
		free(hagats);
	}
	free_stack(stack);
	fclose(mostnd);
	return (0);
}
