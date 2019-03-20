#include<stdio.h>
void main()
{
int a[30],i,j,n;
printf("Enter the number of element");
scanf("%d",&n);
printf("\nEnter the %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the location which should be deleted");
scanf("%d",&j);
for(i=j;i>=0;i--)
{
a[i-1]=a[i];
}
n--;
for(i=0;i<n;i++)
printf("\n%d",a[i]);
}