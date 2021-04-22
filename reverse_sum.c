#include<stdio.h>
int main()
{
int num,temp,rem=0,reverse=0,sum=0;
printf("******Reverse of number and Sum of digits******");
printf("\nEnter a number: ");
scanf("%d",&num);
temp=num;
while(num!=0)
{
	rem=num%10;
	sum=sum+rem;
	reverse=reverse*10+rem;
	num=num/10;
}
printf("\nReverse of %d is: %d\n",temp,reverse);
printf("Sum of digits of %d is: %d",temp,sum);
return 0;
}

