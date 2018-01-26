#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d %d %d", &a,&b,&c);
if(a>b && a>c)
printf( "a is largest number",a);
else if(b>c)
printf("b is largest number",b);
else
printf("c is largest number",c);
}
