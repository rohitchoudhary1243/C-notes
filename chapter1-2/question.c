#include<stdio.h>
#include<math.h>
int main(){
    int issunday = 1;
    int issnowing = 1;
    printf("%d\n", issunday && issnowing);

    int ismonday = 1;
    int israining =0;
    printf("%d\n",ismonday || israining);
// number is greater than 9 and less than 100
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    printf("%d\n", x>9 && x<100);




}