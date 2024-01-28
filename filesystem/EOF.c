// EOF (end of file)
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("new.txt", "r");
    char ch;
    ch = printf("%c", fgetc(fptr));
    while (ch != EOF)
    {
        ch = fgetc(fptr);
        printf("%c", ch);
    }
    printf("\n");
    fclose(fptr);
}