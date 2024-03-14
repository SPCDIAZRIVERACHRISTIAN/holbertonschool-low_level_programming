#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer to be added
 * @b: second integer to be added
 * 
 * Return: returns op to main
*/

int op_add(int a, int b)
{
    return (a+b);
}
/**
 * op_sub - substracts two integers
 * @a: first integer to be subtracted
 * @b: second integer to be subtracted
 * 
 * Return: returns op to main
*/
int op_sub(int a, int b)
{
    return (a-b);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer to be multiplied
 * @b: second integer to be multiplied
 * 
 * Return: returns op to main
*/
int op_mul(int a, int b)
{
    return (a*b);
}
/**
 * op_div - divides two integers
 * @a: first integer to be divided
 * @b: second integer to be divided
 * 
 * Return: returns op to main
*/
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a/b);
}
/**
 * op_mod - divides the numerator
 * between the denominator of integers
 * @a: first integer to be modulated
 * @b: second integer to be modulated
 * 
 * Return: returns op to main
*/
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a%b);
}