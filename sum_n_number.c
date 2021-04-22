#include<stdio.h>
int main()
{
	int c=0;
	char str[10],*p;
	printf("Enter a string: ");
	gets(str);
	p=str;
	while(*p!='\0')
	{
		c++;
		p++;
	}
	printf("\nLength=%d",c);
}
