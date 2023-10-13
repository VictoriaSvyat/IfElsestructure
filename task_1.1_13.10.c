#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{   //В массив заполняются элементы неповторяющиеся
    int arr[20] = {0};
    int arr_new[20] = {0};
    for (int i = 0; i < 20; i++)
    {
        arr_new[i] = -1;
    }
    int flag = 0;
    int index = 1;
    int k = 1;
    for (int i = 0; i < 20; i++)
    {
        arr[i] = 0 + (rand()*time(NULL)) % 10;
        printf("%d\t", arr[i]);
    }
    printf("\n");
    arr_new[0] = arr[0];
    for (int i = 1; i < 20; i++)
    {
        flag = 0; //True
        for (int j = 0; j < 20; j++)
        {
            if (arr[i] == arr_new[j])
            {
                flag = 1; //False
                break;
            }
        }
        if (flag == 0)
        {
            arr_new[index] = arr[i];
            index+=1;
            k+=1;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d\t", arr_new[i]);
    }
    return 0;
}