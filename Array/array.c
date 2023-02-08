#include <stdio.h>
int print(int num)
{
    printf(" %d \n", num);
    return 0;
}

int swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return 0;
}

int inputArray(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

int printArray(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    return i;
}