#include<stdio.h>
#include<conio.h>
void insertion(int array[],int n,int val,int i)
{
   int j;
   for(j=n;j>=i;j--)
   {
      array[j]=array[j-1];
   }
   n++;
   array[i]=val;
   for(j=0;j<n;j++)
   {
       printf("%d ",array[j]);
   }
}
void deletion(int a[],int n,int in)
{
   int i;
   for(i=in;i<n-1;i++)
   {
      a[i]=a[i+1];
   }
   n--;
   for(i=0;i<n;i++)
   {
     printf("%d ",a[i]);
   }
}
void main()
{
  int array[20],n,i,value,index,choice;
  clrscr();
  printf("Enter the no. of element:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  {
     scanf("%d",&array[i]);
  }
  printf("Array Operation:\n1.Insertion\n2.Deletion\nEnter the choice:");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:printf("Enter the insert element:");
	   scanf("%d",&value);
	   printf("Enter the index:");
	   scanf("%d",&index);
	   insertion(array,n,value,index);
	   break;
    case 2:printf("Enter thr delete index:");
	   scanf("%d",&index);
	   deletion(array,n,index);
	   break;

  }
  getch();
}
