#include <stdio.h>
#include <math.h>
int main()
{
    int aadhar[12];
    // input
    for (int i = 0; i < 10; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &aadhar[i]);
    }
    // output
    for (int i = 0; i < 12; i++)
    {
        printf("%d index is: %d", i, aadhar[i]);
    }
    return 0;
}