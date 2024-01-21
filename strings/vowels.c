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
    int vowels = 0;
    int consonents = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
        else if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            consonents++;
        }
    }
    printf("vowels in sentence: %d\n", vowels);
    printf("consonents in sentence: %d\n", consonents);
}