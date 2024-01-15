# include <stdio.h>
int main(){
    float principle, rate, time;
    printf("enter the principle: ");
    scanf("%f", &principle);

    printf("enter the rate(per year) of interest: ");
    scanf("%f",&rate);

    printf("enter the time(in years): ");
    scanf("%f", &time);

    printf("The interest is: %f",time*rate*principle/100 );
    return 0;
    
}