// FILE is a (hidden)structure that needs to be created for opening a file
// a FILE *ptr that points to it's structure & is used to access a file
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "r"); // fopen function takes 2 parameters for opening a file
    fclose(fptr);                   // for closing a file
}
// if flie doesn't exist than pointer will be store NULL and "w","wb" create the file