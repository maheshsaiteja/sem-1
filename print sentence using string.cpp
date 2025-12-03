// write a c program to print sentance using string?
#include<stdio.h>
int main()
{
		char s[100];
		printf("enter a sentance:");
		fgets(s,sizeof(s),stdin);
		
		printf("\nyour sentance is:%s",s);
}
