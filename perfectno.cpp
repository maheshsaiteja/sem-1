// write a cprogram to print number is perfect or not?
#include<stdio.h>
int main(){
	
	int r,n,f,a,c;
	printf("enter a number");
	scanf("%d",&n);
	a=1;
	f=0;
	while(a<n)
	{
		r=n%a;
		if(r==0)
		{f=f+a;
	    }
		a=a+1;
		
	} 
	if(f==n){
	printf(" the number is perfect number");
	}
	else
	{
		printf("the number is not perfect no");
	}
}
