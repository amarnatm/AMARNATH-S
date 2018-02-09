#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter The Intervals\n");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
   {
       if(i%2!=0)
       printf("%d\n",i);
   }
}
