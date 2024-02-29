#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverseList(struct node *header);
void insert(struct node *header);


int main(void)
{
    struct node *header;

    insert(header);

    traverseList(header);
}

void insert(struct node *header)
{
    struct node *newNode, *temp;
    int data, n, a[100];
    printf("Enter the total number of data: ");
    scanf("%d", &n);

    for (int j = 0; j < n; j++)
    {
        printf("Node[%i]->data: ", j);
        scanf("%d", &a[j]);
    }

    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Memory was not allocated successfully!");
    }
    else
    {
        newNode->data = a[0];
        newNode->next = NULL;

        header = newNode;
        temp = header;

        for (int i = 1; i < n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if (newNode == NULL)
            {
                printf("Memory was not allocated successfully!");
                break;
            }
            else
            {
                newNode->data = a[i];
                newNode->next = NULL;

                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
}

void traverseList(struct node *header)
{
    struct node *temp;

    printf("--The Data in the list--\n");
    if (header == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = header;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}