#include<stdio.h>
#include<math.h>
int main(){
    for(int i=1;i<=10;i++){
        if(i==3){
        continue; //skip and continue
        }
        printf("%d\n",i);
    }
}