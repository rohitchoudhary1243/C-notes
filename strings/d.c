// write a programm to replace lowercase letters to upercase
// not working
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h> // ctype.h library
void replace(char *input);
int main()
{
    char input[100];
    fgets(input, 100, stdin);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '\n')
        {
            input[i] = '\0';
            break;
        }
    }
    replace(input);
    printf("convert: %s", input);
}
void replace(char *input)
{
    while (*input)
    {
        if (islower(*input))
        {
            *input = toupper(*input);
        }
        input++;
    }
}