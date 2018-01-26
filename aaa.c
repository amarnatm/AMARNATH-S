#include<stdio.h>
void main()
{
int b[10]={13,7,3,4,5,6,7,8,9,12};
i,n,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
sum=sum+b[i];
printf("\n The sum is %d",sum);
}
