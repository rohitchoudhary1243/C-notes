// before opening a file check that the file is exist or not
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("filename", "r");
    if (fptr == NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        fclose(fptr);
    }
}
