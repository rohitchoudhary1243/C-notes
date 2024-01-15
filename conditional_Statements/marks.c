#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);

    if (marks>=0 && marks<30) { printf("you are failed\n"); }
    else if (marks>=30 && marks <=100 ) { printf("you passed"); }
    else { printf("uh! hmm! please don't bother\n"); }

  return 0;
  // into ternary
  // marks >=30 ? printf("pass\n") : printf("fail");
}