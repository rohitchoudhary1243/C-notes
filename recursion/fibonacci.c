#include<math.h>
#include<stdio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("Fibonacci of %d is: %d",n,fibonacci(n));
}
int fibonacci(int n){
    if (n<=1){
       return n;
    }
    return fibonacci(n-1)+fibonacci(n-2); 
}