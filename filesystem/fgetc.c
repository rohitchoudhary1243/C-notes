// fgetc = file read char
// fputc = file read char
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("new.txt", "r");
    if (fptr == NULL)
    {
        printf("file doesn't exist");
    }
    else
    {

        // printf("enter a char: ");
        printf("%c", fgetc(fptr));
    }
}