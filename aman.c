#include<stdio.h>
void main()
{
int b[10],i,j,temp,m;
printf("enter the number");
scanf("%d",&m);
printf("enter the number");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
for(i=0;i<m;i++)
{
printf("%d",b[i]);
}
}
