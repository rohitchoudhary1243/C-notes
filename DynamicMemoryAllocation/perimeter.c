// write a programm to calculate the peremeter of ractangle
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("perimeter.txt", "w");
    int a, b;
    printf("enter the side a: ");
    scanf("%d", &a);
    printf("enter the side b: ");
    scanf("%d", &b);
    printf("the peremeter is: %d", 2 * (a + b));
    fprintf(fptr, "the peremeter is: %d", 2 * (a + b));
}