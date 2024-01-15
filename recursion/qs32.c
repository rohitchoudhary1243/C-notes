// celsius to farnite conversion
#include<stdio.h>
#include<math.h>
float convert(float celsius);
int main(){
    float celsius;
    printf("enter the celsius value: ");
    scanf("%f",&celsius);
    float answer = convert(celsius);
    printf("%f",answer);

}
float convert(float celsius){
    float answer = (celsius*1.8)+32;
    return answer;
}