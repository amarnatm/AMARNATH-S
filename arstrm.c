#include<stdio.h>
void main()
{
    int a,b,c,d=0;
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        d=d+c*c*c;
        b=b/10;
    }
    if(d==a)
    {
        printf("armstrong",a);
    }
    else
    {
        printf("not armstrong",a);
    }
}
