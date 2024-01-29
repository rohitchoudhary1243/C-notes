// format the information of 5 students in a table like structure inside file
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("studentinfo.txt", "w");
    typedef struct student
    {
        char name[20];
        int roll;
        float cgpa;
    } stu;
    stu s1;
    printf("enter student name: ");
    scanf("%s", &s1.name);
    printf("enter %s's roll no: ", s1.name);
    scanf("%d", &s1.roll);
    printf("enter %s's cgpa: ", s1.name);
    scanf("%f", &s1.cgpa);

    fprintf(fptr, "student name is:   %s\n", s1.name);
    fprintf(fptr, "%s's roll no. is:  %d\n", s1.name, s1.roll);
    fprintf(fptr, "%s's cgpa is:      %f\n", s1.name, s1.cgpa);
}