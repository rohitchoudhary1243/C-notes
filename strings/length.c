#include <stdio.h>
#include <math.h>
int countlength(char arr[]);
int main()
{
    char sentence[200];
    printf("enter your sentence: ");
    fgets(sentence, 200, stdin);
    countlength(sentence);
}
int countlength(char arr[])
{
    int count = 0;
    for (int i = 1; arr[i] != '\0'; i++)
    {
        count++;
    }
    printf("your sentence length is:  %d", count);
}
