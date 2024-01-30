// WAP to allocate the memory of size n, where n is entered by user
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the size of memory: ");
    scanf("%d", &n);
    int *ptr;

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", ptr[i]);
    }
}
// 🐥