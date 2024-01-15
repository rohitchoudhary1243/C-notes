//interchange the value call by value
#include<stdio.h>
#include<math.h>
void value(int a, int b);
int main(){
    int a,b;
    printf("enter the a value: ");
    scanf("%d",&a);
    printf("enter the b value: ");
    scanf("%d",&b);
    value(a,b);
}
void value(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("a value is: %d\n",a);
    printf("b value is: %d\n",b);

}