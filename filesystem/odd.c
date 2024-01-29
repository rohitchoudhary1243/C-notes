// write a programm to store all the odd numbers from 1 to n into a file
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("odd.txt", "w");
    int n;
    printf("print the n: ");
    scanf("%d", &n);
    fprintf(fptr, "odd numbers from 0 to %d are: \t", n);
    for (int i = 0; i != n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }
    fprintf(fptr, "even numbers from 0 to %d are \t", n);

    for (int j = 0; j != n; j++)
    {
        if (j % 2 == 0)
        {
            fprintf(fptr, "%d\n", j);
        }
    }
}