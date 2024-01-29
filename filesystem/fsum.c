// 2 numbers a&b are written in a file write a programm that replace the of numbers
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("sum.txt", "r");
    int a;
    int b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "the sum is: %d", a + b);
    fclose(fptr);
    return 0;
}