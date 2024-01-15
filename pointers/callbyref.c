#include<stdio.h>
#include<math.h>
void square(int* i);
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    printf("number is: %d\n",number);
    square(&number);
}
void square(int* i){
    *i = *i * *i;
    printf("square is: %d",*i);
}