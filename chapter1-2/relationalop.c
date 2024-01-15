#include<stdio.h>
#include<math.h>
int main(){
    printf("%d\n", 5>=5);
    // logical AND
    printf("%d\n", 5!=5 && 5==5);
    //logical OR
    printf("%d\n",5==5 || 5!=5 );
    // logical NOT
    printf("%d\n", !((5!=5) && (5==5)));
    return 0;

}