#include <stdio.h>
#include "Array.h"

int main(void)
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    insert(arr);

    print(arr);
}
void print(int arr[10])
{
    for (int i = 0; i < 11; i++)
    {
        printf("arr[%i] = %i\n", i, arr[i]);
    }
}
void insert(int arr[10])
{
    int *p = &arr[9];
    *(p + 4) = 10;
    *(p + 8) = '\0';
}