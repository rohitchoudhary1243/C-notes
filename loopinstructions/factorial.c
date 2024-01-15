#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf(" %d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
       fact = fact*i;
     
    }  printf("factorial of %d = %d\n",n,fact);
    
}