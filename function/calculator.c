#include<stdio.h>
#include<math.h>
int sum(int a, int b,char op);
int main(){
    int a,b,result;
    char op;
printf("enter the first number: ");
scanf("%d",&a);
printf("enter the operation: ");
scanf(" %c",&op);
printf("enter the second number: ");
scanf("%d",&b);
result = sum(a,b,op);
printf("%d\n",result);
return 0;
}
int sum(int a,int b,char op){
 if(op=='+') return a+b;
 else if(op=='-') return a-b;
 else if(op=='*') return a*b;
 else if(op=='/'){
    if (a!=0&&b!=0) {
     return a/b;
    } else{printf("error: can't divisible by zero\n"); return 0;
}    
    } else{printf("Error: unknown operator= %c \n",op); return 0;}  
}