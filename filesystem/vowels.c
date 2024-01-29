// replace the data in file of Q(a) with the number of vowels in a string
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("vowels.txt", "r");
    char string;
    int countv = 0;
    int countc = 0;
    while (string != EOF)
    {
        string = fgetc(fptr);
        if (string == 'a' || string == 'e' || string == 'i' || string == 'o' || string == 'u')
        {
            countv++;
        }
        else if (string != 'a' && string != 'e' && string != 'i' && string != 'o' && string != 'u')
        {
            countc++;
        }
    }
    fclose(fptr);
    fptr = fopen("vowels.txt", "w");
    fprintf(fptr, "total vowels in string are: %d\n", countv);
    fprintf(fptr, "total consonents in string are: %d", countc);
    fclose(fptr);
}