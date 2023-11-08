#include<stdio.h>
#include<stdlib.h>

struct NODE{
    int data;
    struct NODE *next;
};

void printData(struct NODE *temp,struct NODE *head){
    temp = head;
    while (temp!=0)
    {
        printf(" The elements of the linked list are : %d ",temp->data);
        temp = temp->next;
    }
}


int main()
{
    struct NODE *head, *newNode, *temp;
    int choice = 1;
    head = 0;

    while(choice){
    newNode = (struct NODE*)malloc(sizeof(struct NODE));
    printf("Enter data : ");
    scanf("%d",&newNode->data);
    newNode->next=0;

    if(head ==0)
        head = temp =  newNode;
    else
    {
        temp->next = newNode;
        temp = newNode;
    }
    printf("Do you want to continue : ");
    scanf("%d",&choice);
    }

    printData(temp,head);
    


}