#include<stdio.h>
int main()
{
    int b[100],a,i,j,c;
    printf("enter the value ");
    scanf("%d",&a);
    printf("enter the value ");
    for(i=0;i<a;i++)
    scanf("%d",&b[i]);
    for(i=0;i<a;i++)
  {
      for(j=i+1;j<a;j++)
     {
         if(b[i]>b[j])
         {
         c=b[i];
         b[i]=b[j];
         b[j]=c;
     }
     }
  }
    printf("the number is arranging in assendig order \n");
    for(i=0;i<a;i++)
    printf("\n%d",b[i]);
}
