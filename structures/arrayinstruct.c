// array in the structures//
#include <stdio.h>
#include <string.h>
struct students
{
    char name[20];
    int roll;
    float result;
};
int main()
{
    struct students arts[10];
    struct students maths[10];

    strcpy(arts[0].name, "alex");
    arts[0].roll = 101112;
    arts[0].result = 80;
    strcpy(arts[1].name, "john");
    arts[1].roll = 455232;
    arts[1].result = 80;
    printf("arts student name is: %s\t", arts[0].name);
    printf("%s's roll no. is: %d\t", arts[0].name, arts[0].roll);
    printf("%s;s result is: %f\n", arts[0].name, arts[0].result);
    printf("arts student name is: %s\t", arts[1].name);
    printf("%s's roll no. is: %d\t", arts[1].name, arts[1].roll);
    printf("%s's result is: %f\n", arts[1].name, arts[1].result);

    strcpy(maths[0].name, "rohit");
    maths[0].roll = 125232;
    maths[0].result = 80;
    strcpy(maths[1].name, "jonna");
    maths[1].roll = 124556;
    maths[1].result = 90;
    printf("maths student name is: %s\t", maths[0].name);
    printf("%s's roll no. is: %d\t", maths[0].name, maths[0].roll);
    printf("%s's result is: %f\n", maths[0].name, maths[0].result);
    printf("maths student name is: %s\t", maths[1].name);
    printf("%s's roll no, is: %d\t", maths[1].name, maths[1].roll);
    printf("%s's result is: %f\n", maths[1].name, maths[1].result);
}
