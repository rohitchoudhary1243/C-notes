// Dynamic Memory Allocation
// it is a way to allocate memory to a data structure during the runtime

// we ned some functions to allocate & free memory dynamically
// malloc() = memory allocation
// calloc() = continue allocation
// free() = free memory
// realloc() = re-allocate memory
#include <stdio.h>
#include <stdlib.h> //library for memory allocation functions
int main()
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(float));
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12; // not storing due to memory allocation
    for (int i = 0; i < 5; i++)
    {
        printf("%d", ptr[i]);
    }
}