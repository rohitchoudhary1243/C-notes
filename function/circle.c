#include<stdio.h>
#include<math.h>
float circle(float r);
int main(){
    char s;
    float r;
    printf("enter the radius: ");
    scanf("%f",&r);
    printf("%f", circle(r));
}
float circle(float r){
 return 3.14* r*r;
}