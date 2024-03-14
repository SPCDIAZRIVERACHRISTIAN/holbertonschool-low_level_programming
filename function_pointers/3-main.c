#include "3-calc.h"

/**
 * 
 * 
 * 
 * 
*/

int main(int argc, char *argv[])
{
    int c, d, res;
    int (*fun)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    c = atoi(argv[1]);
    d = atoi(argv[3]);
    fun = get_op_func(argv[2]);

    if (!fun)
    {
        printf("Error\n");
        exit(99);
    }

    res = fun(c, d);
    
    printf("%d\n", res);

    return (0);
}