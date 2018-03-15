#include <stdio.h>
void main(void) {
	char s;
	printf("enter the string:");
	scanf("%s",&s);
	if(s>=65 && s<=90 || s>=97 && s<=122)
	printf("No");
	else
	{
		printf("Yes");
	}
}
