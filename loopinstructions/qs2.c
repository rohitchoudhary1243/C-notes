#include<stdio.h>
#include<math.h>
int main(){
    int n;
    do{
      printf("enter the nmber: ");
      scanf("%d",&n);
      printf("%d\n",n);
      if (n%7 == 0){
        break;
      }
      
    }while (1);
    printf("this is multiple of 7!");
}