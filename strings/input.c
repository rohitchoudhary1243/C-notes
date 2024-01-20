#include <string.h>
#include <stdio.h>
#include <math.h>
int main()
{
    char str[100];
    char ch;
    printf("enter a sentence: ");
    int i = 0;
    while (ch != '\n') // this loop acts like fgets
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    printf("your sentence is: ");
    puts(str);
}