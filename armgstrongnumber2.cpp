#include<stdio.h>
#include<math.h>
int main()
{
	int n,s=0,r,k,c=0,a=24,b=44;
	printf("enter a number");
	scanf("%d",&n);
	k=n;
	while(k>0){
	
		k=k/10;
		c=c+1;
		
	}
	k=n;
	while(n>0){
		r=n%10;
		s=s+pow(r,c);
		n=n/10;
		
		}
		if(k==s){
		
	printf("number is armstrong");}
	else{
		printf("number is not armstrong");
		
	}	
	}
	

