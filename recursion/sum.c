#include<stdio.h>
#include<math.h>
int sum(int n);
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int result=sum(n);
    printf("%d",result);
}
int sum(int n){
    if(n==0){
        printf("sum is 0\n");
        return 0;
    }
    int result = n+sum(n-1);
    if(n==1){
    return result;
    }
}