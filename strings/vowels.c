// count the vowels in sentence
#include <string.h>
#include <stdio.h>
#include <math.h>
void countvowels(char str[]);
int main()
{
    char str[100];
    printf("enter a sentence: ");
    fgets(str, 100, stdin);
    countvowels(str);
}
void countvowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    printf("vowels in sentence: %d", count);
}