#include <stdio.h>
#include <math.h>
int countOdd(int count[], int n);
int main()
{

    int count[] = {1, 2, 3, 4, 5, 6};
    printf("odd count is: %d", countOdd(count, 6));
}
int countOdd(int count[], int n)
{
    int countn = 0;
    for (int i = 0; i < n; i++)
    {
        if (count[i] % 2 != 0)
        {
            countn++;
        }
    }
    return countn;
}