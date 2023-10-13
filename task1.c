#include "stdio.h"
#include "stdlib.h"
int main()
{
    //TASK_3
    const int size = 100;
    int array_size;
    int real_size = 0;
    double array[size];
    float sum = 0;
    double array2[size];
    do
    {
        printf("Enter size: ");
        scanf("%d", &real_size);
    } 
    while (real_size <= 0 || real_size > size);

    for (int i = 0; i<real_size; i++)
    {
        array[i] = 1 + rand()%10;
    }

    for (int i = 0; i<real_size; i++)
    {
        array[i] = 1 + rand()%10;
    }

    for (int i = 0; i<real_size; i++)
    {
        printf("%f\t", array[i]);
    }
    printf("\n");
    for (int i = 0; i<real_size; i++)
    {
        sum = sum + array[i];
        array2[i] = sum;
    }

    for (int i = 0; i<real_size; i++)
    {
        printf("%f\t", array2[i]);
    }
    
    /*
    //TASK_2
    const int size = 600;
    int array_size;
    int real_size = 0;
    int array[size];
    int a, b;
    do
    {
        printf("Enter size: ");
        scanf("%d", &real_size);
    } 
    while (real_size <= 0 || real_size > size);


    printf("Enter [a, b]: ");

    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = 0; i<real_size; i++)
    {
        array[i] = a + rand()%(b-a);
    }
    for (int i = 0; i<real_size; i++)
    {
        printf("%d, ", array[i]);
    }*/



    /*
    //TASK_1
    int n, k;
    printf("Enter: ");
    scanf("%d", &n);
    int smile [n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &k);
        smile[i] = k;
    }
    for (int i = 0; i<n; i++)
    {
        printf("%d, ", smile[i]);
    }*/
}