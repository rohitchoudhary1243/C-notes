// realloc() function
// reallocate (increase or decrease) the memory using same pointer & size
// ptr=realloc(ptr,NewSize);
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("enter %d's student roll no.: ", i);
        scanf("%d", &ptr[i]);

        printf("%d's student roll no. is: %d\n", i, ptr[i]);
    }
    ptr = realloc(ptr, 10);
    for (int j = 0; j < 10; j++)
    {
        printf("enter %d's student phone: ", j);
        scanf("%d", &ptr[j]);
        printf("%d's student phone is: %d\n", j, ptr[j]);
    }
}