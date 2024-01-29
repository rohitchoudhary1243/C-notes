// write a programm to read a string from a file and output to the user
#include <stdio.h.>
int main()
{
    FILE *fptr;
    fptr = fopen("read.txt", "r");
    char str;
    while (str != EOF)
    {
        str = fgetc(fptr);
        printf("%c", str);
    }
    fclose(fptr);
}