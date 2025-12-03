// write a c program to print name,fullname,adress using string?

#include<stdio.h>
int main(){
	char name[100],full_name[100],address[100];
	printf("Enter name: ");
	scanf("%s",&name);
	getchar();
	printf("Enter full name:");
	scanf("%[^\n]",&full_name);
	getchar();
	printf("Enter adress");
	scanf("%[^\n]",&address);
	printf("your name:%s\nyour full name:%s\nyour address:%s",name,full_name,address);
	
}
