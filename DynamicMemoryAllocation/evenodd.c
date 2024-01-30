// allocate memory to store first 5 odd numbers then reallocate it to store first 6 even numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("how many odd numbers do you want to print: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("odd numbers are: ");
    for (int i = 0; i < n * 2; i++)
    {
        if (i % 2 != 0)
        {
            ptr[i] = i;
            printf(" %d\t", ptr[i]);
        }
    }

    printf("\n");
    int m;
    printf("how many even numbers do you want to print: ");
    scanf("%d", &m);
    ptr = realloc(ptr, m);
    printf("even numbers are: ");
    for (int j = 1; j < m * 2; j++)
    {
        if (j % 2 == 0)
        {
            ptr[j] = j;
            printf("%d\t", ptr[j]);
        }
    }
    free(ptr);
    
}