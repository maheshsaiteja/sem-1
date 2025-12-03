// write c program to print sum of digits?
#include<stdio.h>
int main()
{
	int num,sum,rem;
	printf("ENTER A NUMBER");
	scanf("%d",&num);
	sum=0;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum of digits is%d",sum);
}
