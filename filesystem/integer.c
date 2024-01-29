// make a programm that reads integers from text file
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("integer.txt", "r");
    int number;
    if (fptr == NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        int n;
        fscanf(fptr, "%d", &n);
        printf("%d", n);
        fscanf(fptr, "%d", &n);
        printf("%d", n);
        fscanf(fptr, "%d", &n);
        printf("%d", n);
        fscanf(fptr, "%d", &n);
        printf("%d", n);
        fscanf(fptr, "%d", &n);
        printf("%d", n);
    }
}