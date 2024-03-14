#include "3-calc.h"

/**
 * get_op_func - fetches the operator requested
 * by the user
 * @s: points to the operator entered by user
 * 
 * Return: points to the integer result
 * of the math op
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

    while (ops[i].op != NULL)
    {
        if (s ==ops[i].op && s[1] == '\0')
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
