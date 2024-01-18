#include <stdio.h>
#include <math.h>
int main()
{
    int aadhar[10];
    // input
    for (int i = 0; i < 10; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &aadhar[i]);
    }
    // output
    for (int i = 0; i < 10; i++)
    {
        printf("%d index is: %d", i, aadhar[i]);
    }
    return 0;
}