// standard library functions
#include <string.h>
#include <stdio.h>
#include <math.h>
int main()
{
    char sentence[100];
    printf("enter your sentence: ");
    fgets(sentence, 100, stdin);
    int count = strlen(sentence); // string length function
    printf("sentence length is: %d", count - 1);
}