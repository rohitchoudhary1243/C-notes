// check character is present or not in the string
#include <stdio.h>
#include <math.h>
#include <string.h>
void check(char str[], char ch);
int main()
{
    char str[50];
    char ch = 'i';
    printf("enter the value: ");
    fgets(str, 50, stdin);
    check(str, ch);
}
void check(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present");
            return; // return not repeat the statement frequently
        }
    }
    printf("character is not present ");
    return;
}