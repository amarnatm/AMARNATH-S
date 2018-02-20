#include<stdio.h>
	int main()
	{
	int a,d,i,temp,num,rem;
	printf("enter the numbers: ");
	scanf("%d%d",&a,&d);
	printf("not armstrong between %d and %d are:",a,d);
	for(i=a+1;i<d;++i)
	{
	temp=i;
	num=0;
	while(temp!=0)
	{
	rem=(temp%10);
	num+=rem*rem*rem;
	temp/=10;
	}
	if(i==num)
	{
	printf("%d",i);
	}
	}
	return 0;
	}
