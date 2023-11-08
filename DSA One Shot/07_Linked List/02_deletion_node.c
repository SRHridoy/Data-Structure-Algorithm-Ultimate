#include<stdio.h>
#include<stdlib.h>


typedef struct node NODE;

struct node
{
    int data;
    NODE *next;
};

//Create Function : 
NODE *createNode(int data, NODE *next)
{
    NODE *newNode = (NODE*) malloc(sizeof(NODE));
    if(newNode==NULL)
    {
        printf("Failed to allocate memory allocation!");
        exit(1);
    }

    newNode->data = data;
    newNode->next = next;
}


//Deletion : 
NODE *removeNode(NODE *head, NODE *node)
{
//Dekhlam head node tai delete korte chai kina ...
    if(head==node)
    {
        head = head->next;
        free(node);
        return head;
    }
//Ekhon jodi jekono onno node delete korte chai taile ...
    NODE *currentNode = head;
    while (currentNode != NULL)
    {//First e jei node delete korte chai tar previous node ber korbo.....
        if(currentNode->next == node)
        {   
            break;
        }
        currentNode = currentNode->next;
    }
    
    if(currentNode == NULL)
    {
        return head;
    }
//Oi previous node er next e jei node delete korte chai tar next address diye dibo...
    currentNode->next = node->next;
    free(node);
    return head;
}

int main()
{
    NODE *n;
    n = createNode(23,NULL);
    printf("%d", n->data);
}