#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main- isdigit
 * @argsc: integer
 * @argsv: integer
 * Return: prints alphabet
 */
int main(int argsc, char *argsv[])
{
	if (argsc != 4)
	{
		printf("%s", "Error\n");
		exit(98);
	}
	printf("%i\n", get_op_func(argsv[2])(atoi(argsv[1]), atoi(argsv[3])));
}
