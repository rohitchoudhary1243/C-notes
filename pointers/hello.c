#include<stdio.h>
#include<math.h>
int main(){
    int age;
    int *ptr;
    ptr = &age; //pointer variable that stores the address of age variable
     // int _age = *ptr; 

    *ptr = 18;
    printf("address of age var is: %u\n",*(&ptr)); //%p prints address, %u prints data in variable

    *ptr += 5;
    printf("%d\n",age);

   (*ptr)++;
   printf("%u",*ptr);
}