#include<math.h>
#include<stdio.h>
float percentage(float math, float chemistry, float physics);
int main(){ 
    float math,chemistry,physics;
    printf("Enter math number: ");
    scanf("%f",&math);
    printf("Enter chemistry number: ");
    scanf("%f",&chemistry);
    printf("Enter physics number: ");
    scanf("%f",&physics);
    
    printf("%f",percentage(math,chemistry,physics));
    return 0;
}
float percentage(float math, float chemistry, float physics){ 
float answer = ((math+chemistry+physics)/3);
return answer;
}