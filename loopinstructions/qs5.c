#include<stdio.h>
#include<math.h>
// calculate the sum of 5 to 50 natural numbers
int main(){
    int n,m;
    printf("enter the start number: ");
    scanf("%d",&n);
    printf("enter the end number: ");
    scanf("%d",&m);
    int sum=0;
    for(int i=n;i<=m;i++){
        sum += i;   
    } 
    printf("The sum of %d number to %d number is =%d\n",n,m,sum);
}