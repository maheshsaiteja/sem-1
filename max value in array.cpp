// write a cprogram to find biggest number by array?

#include<stdio.h>
int main()
{
	int n,i,a[50],max;
	printf("enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   printf("enter value ofa[%d]",i);
		scanf("%d",&a[i]);
	}for(i=0;i<n;i++){
		printf("\nGive value of a[%d]:%d",i,a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	
	}
	printf("\n maximum valueis: %d",max);
}
