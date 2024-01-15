#include<stdio.h>
#include<math.h>

int main(){
int n;
printf("Enter the nth term: ");
scanf("%d",&n);
int a=0,b=1,answer,i;
for(i=1;i<=n;i++){
    answer=a+b;
    a=b;
    b=answer;
}
printf("The fibonacci of %d term is: %d",n,answer);

}
