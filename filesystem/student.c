// write a programme that stores student information into a file
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w");
    char name[20];
    int roll;
    float cgpa;
    printf("enter student name: ");
    scanf("%s", &name);
    printf("enter %s's roll no.: ", name);
    scanf("%d", &roll);
    printf("enter %s's cgpa: ", name);
    scanf("%f", &cgpa);

    fprintf(fptr, "student name is: %s\t", name); // fprintf function print the data inside file
    fprintf(fptr, " %s's roll no. is: %d\t", name, roll);
    fprintf(fptr, "%s's cgpa is: %f\t", name, cgpa);
    fclose(fptr);
}