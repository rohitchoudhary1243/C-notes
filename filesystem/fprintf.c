#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("text.txt", "w");
    fprintf(fptr, "%s", "rohit"); // fprintf used to write in a file
    fclose(fptr);
}