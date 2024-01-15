#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter the n natural number: ");
scanf("%d",&n);
// printf("%d",number*(number+1)/2);
int sum=0;
for(int j = n; j>=1;j--){
   sum=sum+j;
   printf("%d\n",j);
}
printf("sum is: %d\n",sum);

}
