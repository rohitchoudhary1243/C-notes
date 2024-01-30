// free() function we use it to free the memory allocated by malloc & calloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the size of memory: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d number: ", i);
        scanf("%d", &ptr[i]);

        printf("the %d number is: %d\n", i, ptr[i]);
    }
    free(ptr); // we can free the memory after using dynamically, and again we can use
    int m;
    printf("enter the size of memory: ");
    scanf("%d", &m);
    ptr = (int *)calloc(n, sizeof(int));
    for (int j = 0; j < m; j++)
    {
        printf("%d", ptr[j]);
    }
    free(ptr);
}