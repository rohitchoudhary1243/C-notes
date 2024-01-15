#include<stdio.h>
#include<math.h>
void printaddress(int n);
int main(){
    int n=2000;
    printf("address of n is: %p\n",&n);
    
    printaddress(n); // calling the printaddress by argument n

}
void printaddress(int n){ //n parameter is copy of int n from main function
    printf("address of n is: %p\n",&n);
}

// call by reference
/*void printaddress(int n);
int main(){
    int n=4;
    printf("address of n is: %p\n",&n);
    
    printaddress(&n); // calling the printaddress by argument n

}
void printaddress(int *n){ //n parameter is copy of int n from main function
    printf("address of n is: %p\n",n);
}*/