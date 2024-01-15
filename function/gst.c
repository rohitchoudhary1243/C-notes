#include<stdio.h>
#include<math.h>
void price(float n); //declaration
int main(){
    float n;
    printf("enter the price: ");
    scanf("%f",&n);
    price(n); //argument
}
void price(float n){ //definition (parameter)
 float cgst = 9*n/100;
 printf("CGST is: %f\n",cgst);
 float sgst = 9*n/100;
 printf("SGST is: %f\n",sgst);
 float totalgst = cgst+sgst;
 printf("total GST is: %f\n",totalgst);
 float totalamount = totalgst+n;
 printf("Total amount %f + %f is = %f \n",totalgst,n,totalamount);
}






