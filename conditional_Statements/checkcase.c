#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    printf("enter a english letter: ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z') { printf("UPPER CASE\n");}
    else if (ch>='a' && ch<='z') {printf("lower case\n");}
    else {printf("please enter english letter\n");}
    return 0;
}