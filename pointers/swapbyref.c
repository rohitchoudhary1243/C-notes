#include<stdio.h>
#include<math.h>
void swap(int *a,int *b);
int main(){
int a,b;
printf("enter the a: ");
scanf("%d",&a);
printf("enter the b: ");
scanf("%d",&b);
swap(&a,&b); //the pointer var also changes the value x and y 
printf("a is %d, and b is %d \n",a,b); // move this line up to not change value of x and y
}
void swap(int *a,int *b){
int t;
t = *a;
*a = *b;
*b = t;
printf("value of a is: %d\n",*a);
printf("value of b is: %d\n",*b);
}
