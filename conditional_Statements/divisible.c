#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if (x%2==0){
        printf("number is divisible by 2");
    }
    else { printf("number is not divisible by 2");
    }
    
}