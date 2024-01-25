// store cmplex numbers in struct and print using pointer?
#include <stdio.h>
#include <math.h>
#include <string.h>
struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex num1 = {8, -8};
    struct complex num2 = {6, 2};
    struct complex *ptr = &num1;
    struct complex *ptr2 = &num2;
    printf("real number of num1 is: %d\t and imaginary number is: %d\n", ptr->real, (*ptr).img);
    printf("real number of num2 is: %d\t and imaginary number is: %d\n", (*ptr2).real, ptr2->img);
    return 0;
}