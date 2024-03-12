#include "function_pointers.h"

/**
 * int_index - searches fow an integer
 * @cmp: points to the function to compare values
 * @array: points to the array to be searched
 * @size: size of the array
 * 
 * Return: if elements do not match return -1
 * if succesful returns to the index z 
*/

int int_index(int *array, int size, int (*cmp)(int))
{
    int z;
    if (cmp && array)
    {
        for (z = 0; z <= size; z++)
        {
            if (cmp(array[z]) != 0)
                return(z);
        }
    }
    return (-1);
}