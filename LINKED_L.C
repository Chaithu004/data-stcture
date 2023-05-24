#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node*next;
};
void deletestart(struct node**head)
{
 struct node*temp=*head;
 if(*head==NULL)
 {
  printf("Linked list Empty,nothing to delete");
  return;
 }

 *head=(*head)->next;
 printf("\n%d deleted\n",temp->data);
 free(temp);
 return;
}
void insertstart(struct node**head,int data)
{
 struct node*newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=data;
 newnode->next=*head;
 *head=newnode;
 printf("\n%d inserted\n",newnode->data);
}
void display(struct node*node)
{
 printf("\n Linked list:");
 while(node!=NULL)
 {
  printf("%d",node->data);
  node=node->next;
 }
 printf("\n");
}
int main()
{
 struct node*head=NULL;
 insertstart(&head,100);
 insertstart(&head,80);
 insertstart(&head,60);
 insertstart(&head,40);
 insertstart(&head,20);

 display(head);

 deletestart(&head);
 deletestart(&head);
 display(head);
 return 0;
}