#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    char op;
    printf("enter the digit: ");
    scanf("%d",&a);
    printf("enter the operation(+-*/): ");
    scanf(" %c",&op);
    printf("enter the digit: ");
    scanf("%d",&b);
    switch(op)
    {
        case '+' : printf("%d",a+b); break;
        case '-' : printf("%d",a-b); break;
        case '*' : printf("%d",a*b); break;
        case '/' : printf("%d",a/b);
        if (b!=0&&a!=0){
        printf("%d",a/b);
        }
        else {
        printf("Error, can't divisible by zero");}
        break;
        case '%' : printf("%d",a%b);
        break;
        default : printf("you entered wrong number");
    }
    return 0;
}
