#include <stdio.h>
#include "mm.h"

int main(void)
{
    int arr[10];

    input(arr);

    print(arr);

    max(arr);

    min(arr);
}

void max(int arr[])
{
    for (int i = 0; i < 9; i++)
    {
        if (*(arr + i) > *(arr + i + 1))
        {
            swap((arr+i), (arr+i+1));
        }
    }
    printf("max = %i\n\n", *(arr + 9));
}

void min(int arr[])
{
    for (int i = 0; i < 9; i++)
    {
        if (*(arr + i) < *(arr + i + 1))
        {
            swap((arr+i), (arr+i+1));
        }
    }
    printf("min = %i\n\n", *(arr + 9));
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%i] = %i\n", i, arr[i]);
    }
    printf("\n");
}

void input(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%i] = ", i);
        scanf("%i", &arr[i]);
        *(arr + i) = arr[i];
    }
    printf("\n");
}