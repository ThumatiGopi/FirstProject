#include <stdio.h>
#include "mm.h"

int main(void)
{
    int n;
    printf("Enter the size of the Array: ");
    scanf("%d", &n);

    int arr[n];

    input(arr, n);

    print(arr, n);

    max(arr, n);

    min(arr, n);
}

void max(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        if (*(arr + i) > *(arr + i + 1))
        {
            swap((arr+i), (arr+i+1));
        }
    }
    printf("max = %i\n\n", *(arr + size-1));
}

void min(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        if (*(arr + i) < *(arr + i + 1))
        {
            swap((arr+i), (arr+i+1));
        }
    }
    printf("min = %i\n\n", *(arr + size-1));
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%i] = %i\n", i, arr[i]);
    }
    printf("\n");
}

void input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%i] = ", i);
        scanf("%i", &arr[i]);
        *(arr + i) = arr[i];
    }
    printf("\n");
}