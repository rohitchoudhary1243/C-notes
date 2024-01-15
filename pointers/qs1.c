// print the value of i from its pointer to pointer
#include<stdio.h>
#include<math.h>
int main(){
    float i;
    float *ptrvar = &i;
    float **pptrvar = &ptrvar;
    **pptrvar =10;
    printf("%f",i);
}
  
// int main(){
//     float i = 10;
//     float *ptrvar = &i;
//     float **pptrvar = &ptrvar;
//     printf("%f",**pptrvar); // value jumps 2 times ** if we write *pptrvar than output will be &ptrvar 
// }
