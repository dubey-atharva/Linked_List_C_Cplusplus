#include <stdio.h>
#include<stdlib.h>

struct Node{
    int number;
    struct Node* next;
};

typedef struct Node node;
int i =0;

node* generateList(node* memory[] , int size)
{
    int j = i;
    printf("%d \n", i);
    memory[i] = (node*)malloc(sizeof(node));
    memory[i]->number = rand();
    printf("%d \n", memory[i]->number);
    if(i == size-1)
    {
        memory[i]->next = NULL;
        return memory[j];
    }

    else
    {
        i++ ;
        memory[j]->next = generateList(memory, size);
    }
}

void printList(node* first)
{
    printf("Now in printList");
    if (first == NULL)
    {
        printf("Fist is null ");
        exit(1);
    }
    node *ptr = first;
    while (ptr!= NULL)
        printf("%d \n", ptr->number);
}

    int main()
    {
        int size;
        printf("Enter the size of the list");
        scanf("%d", &size);
        node *List[size];
        node *first = generateList(List, size);
        printList(first);
        return 0;
    }
