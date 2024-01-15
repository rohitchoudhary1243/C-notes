// when a function calls itself called Recursion
#include<stdio.h>
#include<math.h>
void hello(int count);
int main(){
hello(5);
}
//recursive function
void hello(int count){
    if(count==0){
        return;
    }
    printf("hello world!\n");
    hello(count-1);
}