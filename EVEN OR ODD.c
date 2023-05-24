#include<stdio.h>
#include<conio.h>
int main()
{
int num,i;
printf("\nEnter the value of n:");
scanf("%d",&num);
printf("\nEven numbers between 1 and %d are:\n",num);
for(i=1;i<num;i++)
{
if(i%2==0)
{
printf("%d\t",i);
}
}
getch();
return 0;
}