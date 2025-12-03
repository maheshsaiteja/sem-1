// write a c program to print fabinocii series?
#include<stdio.h>
int main(){
	int n,a=0,b=1,c=1;
	printf("enter upto how many terms u want");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	while(c<n)
	{ 
	  
	  printf("%d\t",c);
	  a=b;
	  b=c;
	  c=a+b;
	  
	}
}
