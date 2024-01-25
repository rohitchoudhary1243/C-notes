// pointers in structure
#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll;
    float result;
};
int main()
{
    struct student s1 = {"rohit", 521212, 95};
    // printf("%s's roll number is: %d", s1.name, s1.roll);
    struct student *ptr = &s1;
    // printf("%s's roll number is: %d\t", (*ptr).name, (*ptr).roll); // value at ptr address of roll parameter
    // printf("%s's result is: %f\t", (*ptr).name, (*ptr).result);

    // by arrow operator
    printf("%s's roll no. is: %d", ptr->name, ptr->roll);
    printf("%s's result is: %f", ptr->name, ptr->result);
}