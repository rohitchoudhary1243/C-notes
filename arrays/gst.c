// write a programm to enter price of three items and print their final cost with gst
#include <stdio.h>
#include <math.h>
int main()
{
    int cost[3];
    printf("enter first price: ");
    scanf("%d", &cost[0]);
    printf("enter second price: ");
    scanf("%d", &cost[1]);
    printf("enter third price: ");
    scanf("%d", &cost[2]);
    int gst, total, totalprice;
    // gst = (cost[0] + cost[1] + cost[2]) * 18 / 100;
    // total = cost[0] + cost[1] + cost[2];
    //  totalprice = gst + cost[0] + cost[1] + cost[2];
    //  printf(" your price is: %d\n and GST is %d\n your total price is: %d\n", total, gst, totalprice);
    printf("your total price is: %d\n", cost[0] + cost[1] + cost[2]);
    printf("your total gst is: %d\n", (cost[0] + cost[1] + cost[2]) * 18 / 100);
    printf("your final price is: %d\n", (cost[0] + cost[1] + cost[2]) * 18 / 100 + cost[0] + cost[1] + cost[2]);
}