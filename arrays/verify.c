#include <stdio.h>
#include <math.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\t", *(arr + 2));
    printf("%d\t", *(arr + 10));
}