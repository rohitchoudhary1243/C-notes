// arrays as function argument
#include <stdio.h>
#include <math.h>
int check(int *arr, int n); // we can replace pointer var to array
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    check(arr, 6);
    return 0;
}
int check(int *arr, int n)// and here
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d index is: %d\t ", i, arr[i]);
    }
}
