#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - compares the struct nd proceed to operates
 * @s: operator string
 * Return: pointer to the correct function
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

    while (i < 5)
    {
	    if (*s == *ops[i].op)
		    return (ops[i].f);
	    i++;
    }
    return (NULL);
}
