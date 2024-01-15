#include<stdio.h>
#include<math.h>
void square(int n);
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    printf("number is: %d\n",number);
    square(number);
}
void square(int n){
    n =n*n;
    printf("square is: %d\n",n);
}