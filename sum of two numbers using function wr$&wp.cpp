// write c program to print sum of two numbers using function with return type & with parameters? 
#include <stdio.h>
int add(int a,int b){
	return a+b;
}
int main(){
	int sum=0,a=5,b=6;
	sum=add(a,b);
	printf("sum of%d+%d=%d",a,b,sum);
	return 0;
	
}
