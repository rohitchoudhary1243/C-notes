#include <stdio.h>
#include <string.h>
#include <math.h>
struct vector
{
    int x;
    int y;
};
void calcsum(struct vector v1, struct vector v2, struct vector sum);
int main()
{
    struct vector v1 = {5, 4};
    struct vector v2 = {5, 5};
    struct vector sum = {0};
    calcsum(v1, v2, sum);
}
void calcsum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x; // sum of x, structure var name then structure's data type var name
    sum.y = v1.y + v2.y;
    printf("sum of x is: %d\n", sum.x);
    printf("sum of y is: %d\n", sum.y);
}