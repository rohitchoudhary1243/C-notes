// write a programm to print the highest frequency character in a string
#include <stdio.h>
#include <string.h>
#include <math.h>
void print(char highest[]);
int main()
{
    char str[50];
    printf("enter your name: ");
    fgets(str, 50, stdin);
    print(str);
}
void print(char highest[])
{
    int count[26] = {0};
    int maxfrequency = 0;
    char maxchar;
    for (int i = 0; highest[i] != '\0'; i++)
    {
        if (highest[i] >= 'a' && highest[i] <= 'z')
        {
            count[highest[i] - 'a']++;
            if (count[highest[i] - 'a'] > maxfrequency)
            {
                maxfrequency = count[highest[i] - 'a'];
                maxchar = highest[i];
            }
        }
    }
    if (maxfrequency > 0)
    {
        printf("highest frequency character in your name is: %c", maxchar);
    }
    else
    {
        printf("oh man! you not entered characters...");
    }
}
