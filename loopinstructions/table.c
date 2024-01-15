#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int number=1;
    for(int i=1;i<=10;i++){
        number = n*i;
        printf("%d\n",number);
    }    
    
}  