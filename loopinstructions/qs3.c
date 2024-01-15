#include<stdio.h>
#include<math.h>
// print all odd numbers
int main(){ 
    for(int i=5;i<=50;i++){
        if (i%2 == 0){
            continue;
        }
        printf("%d ",i);
    } 
}