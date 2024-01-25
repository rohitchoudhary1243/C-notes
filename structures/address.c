#include <stdio.h>
#include <string.h>
#include <math.h>
struct address
{
    char name[20];
    int house;
    int block;
    char city[20];
};
// void passing(struct address p[0]);
int main()
{
    struct address p[5];
    printf("enter 1st person name person: \n");
    scanf("%s", &p[0].name);
    printf("enter %s's house no.: %d\n", p[0].name, p[0].house);
    scanf("%d", &p[0].house);
    printf("enter %s's block no.: %d\n", p[0].name, p[0].block);
    scanf("%d", &p[0].block);
    printf("enter %s's city name: %s\n", p[0].name, p[0].city);
    scanf("%s", &p[0].city);
    printf("enter 2nd person name person: \n");
    scanf("%s", &p[1].name);
    printf("enter %s's house no.: %d\n", p[1].name, p[1].house);
    scanf("%d", &p[1].house);
    printf("enter %s's block no.: %d\n", p[1].name, p[1].block);
    scanf("%d", &p[1].block);
    printf("enter %s's city name: %s\n", p[1].name, p[1].city);
    scanf("%s", &p[1].city);
    printf("enter 3rd person name person: \n");
    scanf("%s", &p[2].name);
    printf("enter %s's house no.: %d\n", p[2].name, p[2].house);
    scanf("%d", &p[2].house);
    printf("enter %s's block no.: %d\n", p[2].name, p[2].block);
    scanf("%d", &p[2].block);
    printf("enter %s's city name: %s\n", p[2].name, p[2].city);
    scanf("%s", &p[2].city);
    printf("enter 4th person name person: \n");
    scanf("%s", &p[3].name);
    printf("enter %s's house no.: %d", p[3].name, p[3].house);
    scanf("%d", &p[3].house);
    printf("enter %s's block no.: %d\n", p[3].name, p[3].block);
    scanf("%d", &p[3].block);
    printf("enter %s's city name: %s\n", p[3].name, p[3].city);
    scanf("%s", &p[3].city);
    printf("enter 5th person name person: \n");
    scanf("%s", &p[4].name);
    printf("enter %s's house no.: %d\n", p[4].name, p[4].house);
    scanf("%d", &p[4].house);
    printf("enter %s's block no.: %d\n", p[4].name, p[4].block);
    scanf("%d", &p[4].block);
    printf("enter %s's city name: %s\n", p[4].name, p[4].city);
    scanf("%s", &p[4].city);

    printf("1st person name is: %s", p[0].name);
    printf("%s's house no. is: %d", p[0].name, p[0].house);
    printf("%s's block no. is: %d", p[0].name, p[0].block);
    printf("%s's city is: %s", p[0].name, p[0].city);

    printf("2nd person name is: %s", p[1].name);
    printf("%s's house no. is: %d", p[1].name, p[1].house);
    printf("%s's block no. is: %d", p[1].name, p[1].block);
    printf("%s's city is: %s", p[1].name, p[1].city);

    printf("3rd person name is: %s", p[2].name);
    printf("%s's house no. is: %d", p[2].name, p[2].house);
    printf("%s's block no. is: %d", p[2].name, p[2].block);
    printf("%s's city is: %s", p[2].name, p[2].city);

    printf("4th person name is: %s", p[3].name);
    printf("%s's house no. is: %d", p[3].name, p[3].house);
    printf("%s's block no. is: %d", p[3].name, p[3].block);
    printf("%s's city is: %s", p[3].name, p[3].city);

    printf("5th person name is: %s", p[4].name);
    printf("%s's house no. is: %d", p[4].name, p[4].house);
    printf("%s's block no. is: %d", p[4].name, p[4].block);
    printf("%s's city is: %s", p[4].name, p[4].city);
}
// void passing(struct address p[0]){}
