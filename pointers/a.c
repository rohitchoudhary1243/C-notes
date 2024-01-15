// big number using pointers
#include <stdio.h>
#include <math.h>
int bignumber(int a, int b, int *big);
int main()
{
    int a, b, big;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter b number: ");
    scanf("%d", &b);
    bignumber(a, b, &big);
}
int bignumber(int a, int b, int *big)
{
    if (a > b)
    {
        *big = a;
        printf("big number is: %d", *big);
    }
    else if (b > a)
    {
        *big = b;
        printf("big number is: %d", *big);
    }
    else if (a = b)
    {
        printf("these are equal.");
    }
}