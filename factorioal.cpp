// write a cprogram to print factorial ?
#include<stdio.h>
int main()
{
	int r=1,n;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
	  r=r*n;
	  n=n-1;
		
	}
      printf("the factorial of %d is %d",n,r);
      
}
