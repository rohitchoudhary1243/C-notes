// fgetc = file read char
// fputc = file read char
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("new.txt", "a");
    if (fptr == NULL)
    {
        printf("file doesn't exist");
    }
    else
    {

        // printf("enter a char: ");
        printf("%c", fgetc(fptr)); // fgetc read
        fputc('r', fptr);          // fputc function parameters
        fputc('o', fptr);
        fputc('h', fptr);
        fputc('i', fptr);
        fputc('t', fptr);
    }
}