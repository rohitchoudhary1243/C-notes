#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    char op;
    printf("enter the first digit: ");
    scanf("%f",&a);

    printf("enter the operation: ");
    scanf(" %c",&op);

    printf("enter the second digit: ");
    scanf("%f",&b);

    if (op == '+'){ printf("%f,",a+b);}
    else if (op=='-'){printf("%f,",a-b);}
    else if (op=='*'){printf("%f,",a*b);}
    else if (op=='/'){printf("%f,",a/b);}
    else { printf("you antered wrong value/n");}

} 