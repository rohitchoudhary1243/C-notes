// calloc initializes with 0
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
}