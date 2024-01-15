#include <stdio.h>
#include <math.h>
char alphabet(/*char a, char z,*/ char *solution);
int main()
{
    char a;
    char /*a='a',z='z',*/ *solution;
    *solution = &a;
    alphabet(&solution);
    printf("%d", a);
}
char alphabet(/*char a,char z,*/ char *solution)
{
    char i = 'a';
    for (i = 'a'; i <= 'z'; i++)
        ;
    {
        *solution = i;
    }
}