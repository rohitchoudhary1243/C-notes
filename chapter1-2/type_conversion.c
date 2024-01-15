#include<stdio.h>
#include<math.h>
// int * float, we have to use the float var for output because float consume 4bytes and float var gives exact decimal value if we don't need then we can use %d and (int) in var to convert float value to int value forcefully
int main(){
    int a = (int)1.999;
    printf("%d",a);
    return 0;

}