// make a programm that stores school/college students,teachers different type of data in structures
#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct college
{
    char name[20];
    int roll;
    float cgpa;
} clg;
typedef struct teachers
{
    char name[20];
    int phone;
    char address[20];
} teach;
int main()
{
    clg s[10];
    printf("enter 1st student name: ");
    scanf("%s", &s[0].name);
    printf("enter %s's roll no.: ", s[0].name);
    scanf("%d", &s[0].roll);
    printf("enter %s's cgpa: ", s[0].name);
    scanf("%f", &s[0].cgpa);
    printf("student name is: %s\t", s[0].name);
    printf(" %s's roll no. is: %d\t", s[0].name, s[0].roll);
    printf(" %s's cgpa is: %f\n", s[0].name, s[0].cgpa);

    teach t[20];
    printf("enter teacher name");
    scanf("%s", &t[0].name);
    printf("enter %s's phone: ", t[0].name);
    scanf("%d", &t[0].phone);
    printf("enter %s's address(under 20 char): ", t[0].name);
    scanf("%s", &t[0].address);
    printf("teacher name is: %s\t", t[0].name);
    printf("%s's phone is: %d\t", t[0].name, t[0].phone);
    printf("%s's address is: %s\n", t[0].name, t[0].address);
}