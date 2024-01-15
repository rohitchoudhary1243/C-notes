#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    printf("enter a nmber: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("positive \n");
        if (number % 2 == 0) { printf("even number \n"); }

        else { printf("odd number \n"); }
    }
    if ("number<0") {
        printf("negative number \n");
        if (number%2==0) { printf("even number \n"); }
        else {printf("odd number \n");}
    }
}
