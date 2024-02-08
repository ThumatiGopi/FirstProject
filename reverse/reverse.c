#include <stdio.h>
void reverse(int arr[]);
void print(int arr[]);
void input(int arr[]);

int main(void)
{
    int arr[10];

    input(arr);

    print(arr);

    reverse(arr);

    print(arr);
}

void reverse(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + 9 - i);
        *(arr + 9 - i) = temp;
    }
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