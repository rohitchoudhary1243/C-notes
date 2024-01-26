// store the marks of 30 students in class
#include <stdio.h>
#include <math.h>
int main()
{
    float marks[30];
    for (int i = 0; marks[i] != '\0'; i++)
    {
        printf("enter %d student marks: ", i);
        scanf("%f", &marks[i]);
    }
    for (int i = 0; marks[i] != '\0'; i++)
    {
        printf(" %d student marks is: %f\t ", i, marks[i]);
    }
}