// print the elements of array in reverse order
#include <stdio.h>
#include <math.h>
int main()
{
    int n, m;
    printf("enter the 1st term: ");
    scanf("%d", &n);
    printf("enter the last term: ");
    scanf("%d", &m);
    printf("the series in reverse order is: \n");
    int i = m;
    for (i <= m; i >= n; i--)
    {
        printf("%d ", i);
    }
}