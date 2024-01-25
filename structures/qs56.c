// enter address(block,city,state,house no.) of 5 people
#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct person
{
    char name[20];
    int houseno;
    int block;
    char city[20];
    char state[20];
} p;
void address(p p1, p p2, p p3, p p4, p p5);
int main()
{
    p p1, p2, p3, p4, p5;
    printf("enter person name:");
    scanf("%s", &p1.name);
    printf("enter %s's city: ", p1.name);
    scanf("%s", &p1.city);
    printf("enter %s's hose no.:", p1.name);
    scanf("%d", &p1.houseno);
    printf("enter %s's state: ", p1.name);
    scanf("%s", &p1.state);
    printf("enter %s's block no.: ", p1.name);
    scanf("%d", &p1.block);

    address(p1, p2, p3, p4, p5);
}
void address(p p1, p p2, p p3, p p4, p p5)
{
    printf("person 1 name is: %s\n", p1.name);
    printf("%s's house no. is: %d\n", p1.name, p1.houseno);
    printf("%s's block no. is: %d\n", p1.name, p1.block);
    printf("%s's city is: %s\n", p1.name, p1.city);
    printf("%s's state is: %s\n", p1.name, p1.state);
}