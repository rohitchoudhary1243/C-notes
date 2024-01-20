// standard library functions

#include <string.h>
#include <stdio.h>
#include <math.h>
int main()
{
    char FirstStr[100] = "hello";
    char SecondStr[100] = " world!";
    strcat(FirstStr, SecondStr); // strcat concatenates first string with second string
    puts(FirstStr);
}