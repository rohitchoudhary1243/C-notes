// Pointer arithmetic
#include <stdio.h>
#include <math.h>
int main()
{ // according to int 4bytes
    int age = 10;
    int *ptr = &age;
    printf("int %u ", ptr);
    ptr++; // increment the pointer var address in bytes according to var type int, char, float etc.
    printf("int %u ", ptr);
    ptr--; // decrement same as
    printf("int %u\n ", ptr);
    // according to float 2 bytes
    float age2 = 10.0;
    float *ptr2 = &age2;
    printf("float %u ", ptr);
    ptr++;
    printf("float %u ", ptr);
    ptr--;
    printf("float%u \n", ptr);
    // char 4bytes
    char age3 = '*';
    char *ptr3 = &age3;
    printf("char %u ", ptr);
    ptr++;
    printf("char %u ", ptr);
    ptr--;
    printf("char %u ", ptr);
}