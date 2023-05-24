#include<stdio.h>
#include<conio.h>
int linear(int[],int,int);
main()
{
  int a[10],n,k,i,pos=-1;
  printf("Enter the element N");
  scanf("%d",&n);
  printf("enter the array element");
   for(i=0;i<n;i++)
    {
     scanf("%d",& a[i]);
    }
   printf("enter the search key");
   scanf("%d",&k);
   pos=linear(a,n,k);
   if(pos!=-1)
    {
    printf("available in the linked list %d",pos);
    }
    else
    {
    printf("Not available in the list");
    }
    getch();
    return 0;
}
int linear(int a[],int n,int k)
{
 int i;
 for(i=0;i<n;i++)
  {
   if(a[i]==k)
       return (i);
       }

	return -1;
   }





