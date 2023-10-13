#include "stdio.h"
int main()
{
    int a = 10;
    int arr[10] = {1,2,3,4};
    double b = 10.0;
    char s = '5', g = 24;
    printf("adress arr = %p\n", &arr);
    printf("adress arr[0] = %p\n", &arr[0]);
    printf("adress arr[1] = %p\n", &arr[1]);
    printf("adress arr[2] = %p\n", &arr[2]);
    printf("adress arr[3] = %p\n", &arr[3]);
    printf("adress arr[4] = %p\n", &arr[4]);
    return 0;
}