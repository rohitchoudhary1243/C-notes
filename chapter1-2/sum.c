#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);
//don't need to make sum variable direcly print them
// int sum = a + b;
    printf("%d", a+b);
    return 0;
}