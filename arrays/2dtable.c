#include <stdio.h>
#include <math.h>
void storetables(int table[][10], int n, int m, int number);
int main()
{
    int table[2][10];
    storetables(table, 0, 10, 2);
    storetables(table, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t ", table[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[1][i]);
    }
}
void storetables(int table[][10], int n, int m, int number)
{
    for (int i = 0; i < 10; i++)
    {
        table[n][i] = number * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        table[n][i] = number * (i + 1);
    }
}