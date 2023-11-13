//Write a program that sorts the elements of linked list using bubble sort technique.
#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (NODE *)malloc(sizeof(NODE))
typedef struct node
{
   int data;
   struct node *next;
}NODE;

NODE *create(NODE *head)
{
   NODE *temp,*newnode;
   int i,n;
   printf("\n enter the limit:");
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      newnode=NODEALLOC;
     printf("\n enter the value:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(head==NULL)
     {
        temp=head=newnode;
     }
     else
     {
       temp->next=newnode;
       temp=newnode;
     }
   }
     return head;
}

void display(NODE *head)
{
    NODE *temp;
    printf("\n before sorted linked list:");
    for(temp=head;temp!=NULL;temp=temp->next)
    {
      printf("%d\t",temp->data);
    }
}

void bubbles(NODE *head)
{
    NODE *temp1,*temp2;
    int t;
    for(temp1=head;temp1!=NULL;temp1=temp1->next)
     {
       for(temp2=head;temp2!=NULL;temp2=temp2->next)
        {
           if(temp1->data<temp2->data)
            {
               t=temp1->data;
             temp1->data=temp2->data;
             temp2->data=t;
            }
         }
     }
}

int main()
{
   NODE *head=NULL;
   head=create(head);
   display(head);
   printf("\n sorted linked list:");
   bubbles(head);
   display(head);
}
