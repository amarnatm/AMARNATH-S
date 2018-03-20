#include <stdio.h>
int main(void)
{
	char a;
	printf("enter the string:");
	scanf("%a",&a);
	if(a>=65 && a<=90 || a>=97 && a<=122)
	printf("No");
	else
	{
		printf("Yes");
	}
}
