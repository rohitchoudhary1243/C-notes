// reading from a file
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    char store[20];
    fscanf(fptr, "%s", &store); // fscanf used for read data from files after opening file
    printf("character is: %s", store);

    fclose(fptr);
}