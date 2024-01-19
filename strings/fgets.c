// fgets(str, n,file);
// stops when n-1 chars input or new line is entered
#include <stdio.h>
#include <math.h>
int main()
{
    char sentence[50];
    printf("enter a sentence: ");
    fgets(sentence, 50, stdin); // standard file type
    printf("your sentence is: ");
    puts(sentence);
}