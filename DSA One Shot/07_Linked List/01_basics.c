/*
Linked List e consecutive vabe memory allocate hoi nah...
ekhane 2 ta part thake
                        (i)Data part.
                        (ii)Link part.(Address of next data)
                        ei 2 ta k eksathe bola hoi NODE...

    Head pointer : Staring node addesss...
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

//Creating Node : 
Node *createNode(int item, Node *next)
{
    Node *newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL)
    {
        printf("Error! Could not create a new node!\n");
        exit(1);
    }

    newNode->data = item;
    newNode->next = next;

    return newNode;
}

int main()
{
    Node *n;
    n = createNode(10,NULL);
    printf("Data ;: %d\n",n->data);
    return 0;
}