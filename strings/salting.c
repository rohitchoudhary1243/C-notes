// password salting
#include <string.h>
#include <stdio.h>
#include <math.h>
void salting(char password[]);
int main()
{
    char password[50];
    printf("enter a password: ");
    scanf("%s", password);
    // char ch;
    // int i = 0;
    // while (ch != '\n') // fgets function
    // {
    //     scanf("%c", &ch);
    //     password[i] = ch;
    //     i++;
    // }
    // password[i] = '\0';
    salting(password);
}
void salting(char password[])
{
    char saltcode[] = "abc123";
    char salt[56];
    strcpy(salt, password);
    strcat(salt, saltcode);
    printf("salt is: ");
    puts(salt);
}