// we can also substract one pointer from another pointer
// we can also compare the two pointers
#include <stdio.h>
#include <math.h>
int main()
{
    int age = 18;
    int _age = 20;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("substract: %d ", *_ptr - *ptr);
    *ptr = _age;
    printf("compare: %d ", *ptr == *_ptr);
}