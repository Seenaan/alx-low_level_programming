#include "3-calc.h"

/**
 * get_op_func - fun pointer
 * @s: the operator given by the user
 * Return: pointer to the fun
 */

int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
		  {"+", op_add},
		  {"-", op_sub},
		  {"*", op_mul},
		  {"/", op_div},
		  {"%", op_mod},
		  {NULL, NULL}
	 };
	 int i;

	 i = 0;

	 while (ops[i].op)
	 {
		 if (strcmp(ops[i].op, s) == 0)
			 retun (ops[i].f);
		 i++;
	 }

	 return (NULL);
}
