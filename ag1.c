#include<stdio.h>
void main()
{
    int a,c,i;
    printf("Enter The Intervals\n");
    scanf("%d %d",&a,&c);
    for(i=a;i<=c;i++)
   {
       if(i%2!=0)
       printf("%d\n",i);
   }
}
