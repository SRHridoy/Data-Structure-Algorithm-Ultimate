/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
(24) Write a program that uses functions to perform the following operations on singly linked
list:
a) Creation
b) Insertion
c) Deletion
d) Traversal
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
struct node
{
    int data;
    NODE *next;
};

//Create Node : 
NODE *createNode(int data, NODE *next)
{
    //Reserving memory : 
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    if (newNode==NULL)
    {
        printf("Failed To allocate memory!");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//Insertion in the first: 
NODE *prepend(NODE *head, int data)
{
    NODE *newNode = createNode(data,head);
    return newNode;
}

//Insertion in the end : 
NODE *append(NODE *head, int data)
{
    NODE *newNode = createNode(data,NULL);

    if(head == NULL)
    {
        return newNode;
    }

    NODE *currentNode = head;

    while (currentNode->next!=NULL)
    {
        currentNode = currentNode->next;
    }
    
    currentNode->next = newNode;
    return head;
}

//Insertion at any place:
void insert(NODE *node, int data)
{
    NODE *newNode = createNode(data,node->next);
    node->next = newNode;
}

//Deletion : 
NODE *deleteNode(NODE *head, NODE *node)
{
//Jodi jeta delete korte chai seta head hoi ...
    if(node == head)
    {
        head = node->next;
        free(node);
        return head;
    }
//Jei node delete korbo tar ager node search : 
    NODE *currentNode = head;
    while (currentNode!=NULL)
    {
        if(currentNode->next == node)
        {
            break;
        }
        currentNode = currentNode->next;
    }
//Jodi jei node delete korbo setar ager ta null thake orthat Ses node por taile to kisu delete korai lagbe nah....
    if(currentNode==NULL)
    {
        return head;
    }

    currentNode->next = node->next;
    free(node);
    return head;
}

//Traversal: 
void printLinkedList(NODE *head)
{
    NODE *currentNode = head;
    printf("\nThe linked list elements are : ");
    while (currentNode!=NULL)
    {
        printf("%d ",currentNode->data);
        currentNode = currentNode->next;
    }
}


int main()
{
//Creating NODE : 
    NODE *head;
    head = createNode(25,NULL);

//Printing:
    printLinkedList(head);

//Insertion at first:
    head = prepend(head,55);
    printf("\nAfter insertion at first : ");
    printLinkedList(head);

//Insertion at any position :
    int dataToInsert, afterWhichData;
    printf("\nEnter data to insert: ");
    scanf("%d", &dataToInsert);
    printf("\nEnter data after which you want to insert : ");
    scanf("%d", &afterWhichData);

    NODE *temp = head;
    while (temp->data!=afterWhichData)
    {
        temp = temp->next;
    }
    insert(temp,dataToInsert);
    printf("\nAfter Insertion : ");
    printLinkedList(head);


//Insertion at end:
    append(head,44);
    printf("\nAfter Insertion at end : ");
    printLinkedList(head);

//Delete from 1st:
    head = deleteNode(head,head);
    printf("\nAfter delete the first node : ");
    printLinkedList(head);

//Delete from anyplace: 
    int dataDelete;
    printf("\nEnter the data which you want to delete : ");
    scanf("%d",&dataDelete);

    NODE *currentNode = head;
    while (currentNode!=NULL)
    {
        if(currentNode->data==dataDelete)
        {
            break;
        }
        currentNode = currentNode->next;
    }
    
    if(currentNode!=NULL)
    {
        head = deleteNode(head,currentNode);
        printf("\nAfter deletion : ");
        printLinkedList(head);
    }
    else
    {
        printf("\nThe data is not found in linked list...");
    }


    return 0;
}