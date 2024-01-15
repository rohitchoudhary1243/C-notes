#include<stdio.h>
#include<math.h>
void printtable(int n); // decleration
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printtable(n); // argument/actual parameter

}
void printtable(int n) // parameter/formal parameter
{
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}