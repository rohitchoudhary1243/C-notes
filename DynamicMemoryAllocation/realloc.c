// realloc() function
// reallocate (increase or decrease) the memory using same pointer & size
// ptr=realloc(ptr,NewSize);
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the size of memory: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter %d's student roll no.: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d's student roll no. is: %d\n", i, ptr[i]);
    }

    int m;
    printf("update the size of memory: ");
    scanf("%d", &m);

    ptr = realloc(ptr, m); // parameters for reallocating
    for (int j = 0; j < m; j++)
    {
        printf("enter %d's student phone: ", j);
        scanf("%d", &ptr[j]);
    }
    for (int j = 0; j < m; j++)
    {
        printf("%d's student phone is: %d\n", j, ptr[j]);
    }
    free(ptr);
}