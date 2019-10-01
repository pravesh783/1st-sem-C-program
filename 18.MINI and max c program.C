#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
printf("enter the elements of array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
if(a[0]>a[i+1])
a[0]=a[i+1];
}

printf("minimum no of array=%d\n",a[0]);
for(i=0;i<5;i++)
{
if(a[0]<a[i+1])
a[0]=a[i+1];
}
printf("maximum no in array=%d",a[0]);
getch();
}