#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    if (marks>=0 && marks <30) { printf("you are absoulutely fail");}
    else if (marks>=30 && marks<45){printf("your grade is 'D'\n");}
    else if (marks>=45 && marks<60){printf("your grade is 'C'\n");}
    else if (marks>=60 && marks<75){printf("your grade is 'b'\n");}
    else if (marks>=75 && marks<85){printf("your grade is 'a'\n");}
    else if (marks>=85 && marks<=95){printf("your grade is a+\n");}
    else if (marks>95 && marks<=100){printf("you are a toper\n");}
    else {printf("please don't be sad man!");}
    return 0;
}