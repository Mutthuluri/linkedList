#include <stdio.h>
#include <stdlib.h>
/////////////declaring structure variables//////
struct node
{
    int data;
    struct node *next;
};

void main()
{
    //////giving size and declaring pointers
    int choice;
    struct node *head, *newnode, *temp;
    head = 0;
   do
    {
        ////giving the size to the new node/////
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        /////main logic of the code //////
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter the 1 to add another node or 0 to exit\n");
    scanf("%d",&choice);
        /////implemetation is done succesfully
    } while (choice);
    
    
    //////printing of the linked list
    temp = head;
    printf("Entered data in the linked list till now are:");
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}