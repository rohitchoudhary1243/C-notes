// passing structures to function
#include <stdio.h>
#include <string.h>
#include <math.h>
struct student
{
    char name[20];
    int roll;
    float result;
};
void passing(struct student s1);
int main()
{
    struct student s1 = {"rohit", 457845, 95};
    passing(s1);
}
void passing(struct student s1)
{
    printf("student name is: %s\t", s1.name);
    printf("%s's roll no. is: %d\t", s1.name, s1.roll);
    printf("%s's result is: %f", s1.name, s1.result);
}