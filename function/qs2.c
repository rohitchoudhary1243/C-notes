#include<stdio.h>
#include<math.h>
void country();
int main(){
    country();
}
void country(){
    char n;
    printf("enter you region (i for indian/f for french): ");
    scanf("%c",&n);
 if  ( n == 'f')
   {printf("bonjour!");}
else if( n =='i')
{printf("namaste!");}
return 0;
}