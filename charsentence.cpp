// write a cprogram based on characters and print A,CSE,and HAD YOUR LUNCH?
#include<stdio.h>
int main()
{
	char grade;
	char name[10];
	char sen[20];
	printf("Enter grade");
	scanf("%c",&grade);
	printf("Enter Name:");
	scanf("%s",&name);
	getchar();
	printf("Enter sentence");
	scanf("%[^\n]",sen);
	printf("%c \n %s \n%s",grade,name,sen);
	return 0;
}
