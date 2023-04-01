#include "function_pointers.h"

/**
 * int_index - Function searches for an intger
 * @array: array input
 * @size: number of element in array
 * @(*cmp)(int): pointer to the function
 *
 *Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int)) {
    if (size <= 0) {
        return -1;
    }
    for (int i = 0; i < size; i++) {
        if (cmp(array[i]) != 0) {
            return i;
        }
    }
    return -1;
}
