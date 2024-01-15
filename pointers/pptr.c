#include<stdio.h>
#include<math.h>
int main(){
    int age;
    int *ptr = &age;
    *ptr = 18;  // ptr var has address of age var than data will be store on age var
    int **pptr = &ptr; // a pointer that stores memory location of another pointer
    printf("address of age var is: %p \n",ptr);
    printf("address of ptr var is: %p \n",pptr);
    printf("value at address of ptr is: %p\n",*(&ptr));
    printf("value at address of pptr is: %p\n",*(&pptr));
    printf("data on the var age is: %d\n",age);
}