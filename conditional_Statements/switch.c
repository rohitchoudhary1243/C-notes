#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    // text abbrevietion
    char day;
    printf("enter a day(s,m,t,w,T,f,S,): ");
    scanf("%c",&day);

    switch (day){
        case 's' : printf("Sunday\n");
        break;
        case 'm' : printf("Monday\n");
        break;
        case 't' : printf("Tuesday\n");
        break;
        case 'w' : printf("wednesday\n");
        break;
        case 'T' : printf("Thursday\n");
        break;    
        case 'f' : printf("Friday\n");
        break;
        case 'S' : printf("Saturday\n");
        break;
        default : printf("please enter the one of into the statement ");

    }
}
