#include<stdio.h>
void main()
{
    int n,a[10],i,t;
    printf("enter the limits");
    scanf("%d",&n);
    printf("\nenter the number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n;i++)
    {
    if(t<a[i])
    {
        t=a[i];
    }
    }
    printf("\n %d",t);
}
