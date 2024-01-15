#include<stdio.h>
#include<math.h>
// reverse table
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int number=1;
    for(int i=10;i>=1;i--){
    number=i*n;
    printf("%d\n",number);
    }
}