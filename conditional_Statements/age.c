#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    printf("Congrats\n");

    if (age >18 && age<110){
        printf("you are an adult\n");
    }
    else if (age <0 || age>110){
        printf("invalid age\n");
    }

    else if (age>=13 && age<=18){
    printf("you are teenager\n");
    }
    else if (age>0 && age<12){
        printf("you are a kid");
    }
   
    return 0; 
    
}