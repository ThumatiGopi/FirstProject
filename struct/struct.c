#include <stdio.h>

struct Employee
{
    int id;
    char Name[50];
    float salary;
}E[5];

int main(void)
{
    for(int i=0; i<5; i++)
    {
        printf("\nID of E[%i]: ", i);
        scanf("%i", &E[i].id);

        printf("Name of E[%i]: ", i);
        scanf("%s", E[i].Name);

        printf("Salary of E[%i]: ", i);
        scanf("%f", &E[i].salary);
        
    }

    for(int i=0; i<5; i++)
    {
        printf("E[%i]:\n", i);
        printf("ID: %i\n", E[i].id);
        printf("Name: %s\n", E[i].Name);
        printf("ID: %f\n\n", E[i].salary);
    }
    
}