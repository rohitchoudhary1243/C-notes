// string using pointer
// store string in memory & the assigned address is stored in char *ptr
#include <stdio.h>
#include <math.h>
int main()
{
    // char *ptr="rohit choudhary";
    char *ptr = "a sentence";
    puts(ptr);
    ptr = "my name"; // string value by pointer can change
    puts(ptr);

    char arr[] = "hello world!";
    // arr[]="hello"; cannot change
    puts(arr);
}