#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
struct student // structures declaration
{
    char name[50];
    int roll; // USER DEFINE DATA TYPE
    float result;
};

int main()
{
    struct student s1;
    strcpy(s1.name, "rohit");
    s1.roll = 123112; // value assign to parameters by .
    s1.result = 90;
    printf("student name is: %s\n", s1.name);
    printf("%s's Roll No. is: %d\n", s1.name, s1.roll);
    printf("%s's Result is: %f%\n", s1.name, s1.result);
}