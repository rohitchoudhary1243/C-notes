#include <stdio.h>
#include <math.h>
void printname(char first[] /*, char last[]*/);
int main()
{
    char firstname[] = {'R', 'O', 'H', 'I', 'T', '\0'};
    char lastname[] = "CHOUDHARY";
    printname(firstname); // we can call two times if we don't want create more code
    printname(lastname);
}
void printname(char first[] /*,char last[]*/) // and we can create two and more var in function for a single call
{
    for (char i = 0; first[i] != '\0'; i++)
    {
        printf("%c", first[i]);
    }
    printf("\t");
    // for (char i = 0; last[i] != '\0'; i++)
    // {
    //     printf("%c", last[i]);
    // }
}