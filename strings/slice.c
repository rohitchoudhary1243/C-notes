// write a function slice which takes a string and returns  a sliced string from index n to m
#include <string.h>
#include <stdio.h>
#include <math.h>
void slice(char str[], int start, int end);
int main()
{
    int start, end;
    char str[50];
    printf("enter a value: ");
    scanf("%s", &str);

    printf("enter start index: ");
    scanf("%d", &start);
    printf("enter end index: ");
    scanf("%d", &end);
    slice(str, start, end);
}
void slice(char str[], int start, int end)
{
    if (start < 0 || end == 0)
    {
        printf("invalid index!");
    }
    char sliced[50];
    int j = 0, i;
    for (i = start, j = 0; i <= end; i++, j++)
    {
        sliced[j] = str[i];
    }
    sliced[j] = '\0';
    puts(sliced);
}