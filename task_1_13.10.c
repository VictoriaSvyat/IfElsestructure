#include "stdio.h"
#include "stdlib.h"
int main()
{
    //BUBBLE_SORT (0,3,4,6,9,12,465)
    int arr[10] = {0};
    int arr_new[10] = {0};
    int help = 0;
    for (int i = 0; i < (sizeof(arr)/4); i++)
    {
        arr[i] = 1 + rand() % 100;
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < (sizeof(arr)/4); i++)
    {
        for (int j = i + 1; j < (sizeof(arr)/4); j++)
        {
            if (arr[i] > arr[j])
            {
                help = arr[i];
                arr[i] = arr[j];
                arr[j] = help;
            }
        }
        printf("%d\t", arr[i]);
    }
    return 0;
}