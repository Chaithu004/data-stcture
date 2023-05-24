#include<stdio.h>
#define SIZE 100
void enqueue();
void dequeue();
void show();
int inp_arr[SIZE];
int Rear=-1;
int Front=-1;
int i;
main()
{
int ch;
while(1)
{
printf("1.Enqueue operation\n");
printf("2.Dequeue operation\n");
printf("3.Display the queue\n");
printf("4.Exit\n");
printf("Enter your choice of operations:");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
show();
break;
case 4:
exit(0);
default:
printf("incorrect choice\n");
}
}
}
void enqueue()
{
int insert_item;
if(Rear==SIZE-1)
printf("overflow\n");
else
{
if(Front==-1)
Front=0;
printf("Element to be inserted in the Queue\n:");
scanf("%d",&insert_item);
Rear=Rear+1;
inp_arr[Rear]=insert_item;
}
}
void dequeue()
{
if(Front==-1||Front>Rear)
{
printf("Element deleted from the queue:%d\n",inp_arr[Front]);
Front=Front+1;
}
}
void show()
{
if(Front==-1)
printf("Empty queue\n");
else
{
printf("queue:\n");
for(i=Front;i<=Rear;i++)
printf("%d",inp_arr[i]);
printf("\n");
}
}