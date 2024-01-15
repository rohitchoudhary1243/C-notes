#include<stdio.h>
#include<math.h>
float rectangle(float length,float width);
int main(){
    float length,width;
    printf("enter the length: ");
    scanf("%f",&length);
    printf("enter the width: ");
    scanf("%f",&width);
    printf("Area of Rectangle( %f length and %f width) is: %f",length,width,rectangle(length,width));
}

float rectangle(float length, float width){
return length*width; 
}