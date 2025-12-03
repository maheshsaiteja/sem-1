#include<stdio.h>
int main()
{
	int n,fc,i,r;
	fc=0;
	printf("ENTER A NUMBER");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=n%i;
		if(r==0)
		{
			fc=fc+1;
	    }
    }
		if(fc==2)
		{
			printf(" %d is prime number",n);
	    }
	    else
	    printf("%d is not prime",n);
	
}
