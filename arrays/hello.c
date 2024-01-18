// array is collection of similar data type. a method of clubbing multiple entities of similar type into a larger group
#include <stdio.h>
#include <math.h>
int main()
{
    int marks[3];
    printf("enter your math marks: ");
    scanf("%d", &marks[0]);
    printf("enter your physics marks: ");
    scanf("%d", &marks[1]);
    printf("enter your chemistry marks: ");
    scanf("%d", &marks[2]);
    printf("math marks is: %d\n physics marks is: %d\n chemistry marks is: %d\n", marks[0], marks[1], marks[2]);
}