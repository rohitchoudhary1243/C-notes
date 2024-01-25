// typedef keyword
//  used to create alias for data type
#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct ComputerScienceStudent
{
    char name[20];
    int roll;
    float result;
} css; // alias for computerScirnceStudent
void passing(css s1, css s2);
int main()
{
    css s1 = {"rohit", 124512, 95};
    css s2;
    strcpy(s2.name, "rahul");
    s2.roll = 12421;
    s2.result = 90;
    passing(s1, s2); // when we have to call the function we can call the var name like s1 s2
}
void passing(css s1, css s2)
{
    printf("student name is %s\t", s1.name);
    printf("%s's roll no. is: %d\t", s1.name, s1.roll);
    printf("%s's result is: %f\n", s1.name, s1.result);
    printf("student name is: %s\t", s2.name);
    printf("%s's roll no. is: %d\t", s2.name, s2.roll);
    printf("%s's result is: %f\n", s2.name, s2.result);
}