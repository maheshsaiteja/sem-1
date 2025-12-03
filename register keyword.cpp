// write a c program for register keyword(storage classes)?

#include<stdio.h>
int display(){
	register int a=10;
	printf("%d",a);
}
int main()
{
	display();
	
}
