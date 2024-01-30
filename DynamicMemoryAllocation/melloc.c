// WAP to allocate memory to store 5 prices
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float)); // memory allocate at run time
    printf("enter the 1st price: ");
    scanf("%f", &ptr[0]);
    printf("enter the 2nd price: ");
    scanf("%f", &ptr[1]);
    printf("enter the 3rd price: ");
    scanf("%f", &ptr[2]);
    printf("enter the 4th price: ");
    scanf("%f", &ptr[3]);
    printf("enter the 5th price: ");
    scanf("%f", &ptr[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d's price is: %f\n", i, ptr[i]);
    }
}