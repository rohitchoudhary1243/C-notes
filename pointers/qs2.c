#include<stdio.h>
#include<math.h>
void work(int a, int b, int *sum, int *multi,int *avg);
int main(){
    int a=3,b=6;
    int sum,multi,avg;
    work(a,b,/*calling by value*/&sum,&multi,&avg/*calling by reference*/); // to work function

    printf("sum is: %d, multiple is: %d average is: %d", sum, multi, avg);
    return 0;
}
void work(int a, int b, int *sum, int *multi, int *avg/*recieving value at address of from main function calling*/){
    *sum = a+b;
    *multi = a*b;
    *avg = (a+b)/2;
   
}