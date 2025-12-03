//write a fibonaccy series using function and recursion?
#include<stdio.h>
int fibonacci(int n){
	if(n==0)
	return 0 ;
	if(n==1)
	return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

	int main()
	{
		int i,n;
		printf("enter a number:");
		scanf("%d",&n);
		printf("fibonacci series:");
		for(i=0;i<n;i++)
			{
				printf("%d\t",  fibonacci(i));
				
				}	
		return 0;
		
		
	} 
