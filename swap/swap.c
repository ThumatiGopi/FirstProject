#include <stdio.h>
void swap(int *a, int *b);

int main(void)
{
    int a;
    printf("a = ");
    scanf("%i", &a);

    int b;
    printf("b = ");
    scanf("%i", &b);

    printf("a = %i, b = %i\n", a, b);

    swap(&a, &b);
    
    printf("a = %i, b = %i\n", a, b);

}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}