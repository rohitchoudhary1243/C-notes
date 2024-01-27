// store customer bank account details in struct using alias
#include <stdio.h>
#include <stdio.h>
#include <math.h>
typedef struct BankAccount
{
    char name[20];
    int number;
    char ifsc[10];
} bank;
int main()
{
    bank c1;
    printf("enter your name: ");
    scanf("%s", &c1.name);
    printf("enter account number: ");
    scanf("%d", &c1.number);
    printf("enter IFSC code: ");
    scanf("%s", &c1.ifsc);
    printf("name of user is: %s\t", c1.name);
    printf("%s's acc number is: %d\t", c1.name, c1.number);
    printf("%s's ifsc code is: %s\n", c1.name, c1.ifsc);
}