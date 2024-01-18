#include <stdio.h>
#include <math.h>
int main()
{
    // 2students*2subjects
    float marks[2][2];
    printf("enter rohit's english marks: ");
    scanf("%f", &marks[0][0]);
    printf("enter rohit's math marks: ");
    scanf("%f", &marks[0][1]);
    printf("enter rahul's english marks: ");
    scanf("%f", &marks[1][0]);
    printf("enter rahul's math marks: ");
    scanf("%f", &marks[1][1]);

    printf("rohit's english marks is: %f\t and math marks is: %f\n", marks[0][0], marks[0][1]);
    printf("rahul's english marks is: %f\t and math marks is: %f\n", marks[1][0], marks[1][1]);
}