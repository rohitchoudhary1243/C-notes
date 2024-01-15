#include<stdio.h>
#include<math.h>
void square(int n);
int main(){
int n;
printf("enter the number: ");
scanf("%d",&n);
square(n);
}
void square(int n){
printf("%d",(int)pow(n,2));
}