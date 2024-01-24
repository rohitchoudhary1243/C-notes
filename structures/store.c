// write a programm to store the data of three student
#include <string.h>
#include <stdio.h>
struct student
{
    char name[50];
    float result;
    int roll;
};
int main()
{
    struct student s1;
    strcpy(s1.name, "rohit");
    s1.result = 90;
    s1.roll = 125224;
    printf("student name is: %s\n", s1.name);
    printf("%s's roll no. is: %d\n", s1.name, s1.roll);
    printf("%s's result is: %f\n", s1.name, s1.result);

    struct student s2;
    strcpy(s2.name, "harry");
    s2.roll = 564585;
    s2.result = 80;
    printf("student name is: %s\n", s2.name);
    printf("%s's roll no. is: %d\n", s2.name, s2.roll);
    printf("%s's result is: %f\n", s2.name, s2.result);

    struct student s3;
    strcpy(s3.name, "shradha");
    s3.result = 95;
    s3.roll = 443322;
    printf("student name is: %s\n", s3.name);
    printf("%s's roll no. is: %d\n", s3.name, s3.roll);
    printf("%s's result is: %f\n", s3.name, s3.result);
}