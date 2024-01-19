#include <stdio.h>
#include <math.h>
int main()
{
    int arr[] = {1, 2, 3, 4};
    for (int i = 3; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}