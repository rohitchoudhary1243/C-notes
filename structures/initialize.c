// if we use  initializing in structures than we don't have to use dot operater many times
#include <string.h>
#include <stdio.h>
struct student
{                  // parameters
    char name[20]; // structures declaration order
    int roll;
    float result;
};
int main()
{
    struct student s1 = {"rohit", 451245, 90}; // assign values to struct according to parameters order
    struct student s2 = {"jane", 124512, 90};
    printf("students name is: %s\t", s1.name);
    printf("%s's roll no. is: %d\t", s1.name, s1.roll);
    printf("%s's result is: %f\n", s1.name, s1.result);
    printf("student name is: %s\t", s2.name);
    printf("%s's roll no. is: %d\t", s2.name, s2.roll);
    printf("%s's result is: %f\n", s2.name, s2.result);
}
