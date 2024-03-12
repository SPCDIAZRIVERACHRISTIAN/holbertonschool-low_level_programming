#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes parameter function
* @array: array that is being itirrated
* @size: size of the array
* @action: pointer that points to function 
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int index;

    if (!array || !action)
        return;

    for (index = 0; index < size; index++)
        action(array[index]);
}