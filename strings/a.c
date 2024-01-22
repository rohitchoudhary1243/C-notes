// write programm to convert all lowercase vowels to upercase in a string
#include <stdio.h>
#include <string.h>
#include <math.h>
void convert(char str[]);
int main()
{
    char str[5];
    printf("enter a vowel: ");
    scanf("%s", &str);
    convert(str);
}
void convert(char str[])
{
    printf("upercase is: ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            printf("A");
        }
        else if (str[i] == 'e')
        {
            printf("E");
        }
        else if (str[i] == 'i')
        {
            printf("I");
        }
        else if (str[i] == 'o')
        {
            printf("O");
        }
        else if (str[i] == 'u')
        {
            printf("U");
        }
        printf("upercase is: %s", str[i]);
    }
}