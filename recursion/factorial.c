#include<stdio.h>
#include<math.h>
int fact(int n);
int main(){
    int n;
    printf("enter the number; ");
    scanf("%d",&n);
    printf("%d", fact(n));
}
int fact(int n){
    if (n==1){
    return 1;
    }
    int answer=n*fact(n-1);
    return answer;
    
}