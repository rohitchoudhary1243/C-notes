// standard library functions
#include <string.h>
#include <stdio.h>
#include <math.h>
int main()
{
    char firstStr[100] = "apple";
    char secondStr[100] = "tree";
    printf("%d", strcmp(secondStr, firstStr)); // strcmp compares the value of strings in ascii value
}