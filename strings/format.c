// string format specifier = %s
#include <stdio.h>
#include <math.h>
int main()
{
    char name[40];
    printf("enter your name: ");
    scanf(" %s ", name); // scanf() cannot input multi word strings with spaces
    printf("your name is: %s", name);

    // gets() puts() for full sentence but these are unsafe and currently not using in c(dengerous and outdated)
    // char myname[50];
    // gets(myname);
    // puts(myname);
}
