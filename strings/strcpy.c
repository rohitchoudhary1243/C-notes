// standard library functions
#include <string.h>
#include <stdio.h>
#include <math.h>
int main()
{
    char str1[] = "hello";
    char str2[] = "hello world!";
    strcpy(str2, str1); // strcpy function copies the value of one string to another string
    puts(str2);
}