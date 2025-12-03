/* write a c program to caluculate electricity bill
       first 100 units=1.5perunit
       next 200 units =2.5 perunit
       above 300 units = 4 perunit  */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	float m;
	printf("ENTER THE UNTS");
	scanf("%d",&n);
	 if(n<101)
	 {
	   m=n*1.5;
	 }
	  else if(n<301)
	 	m=(100*1.5)+(n-100)*2.5;
	 else
	 {
	 	m=(100*1.5)+(200*2.5)+(n-300)*4;
	 }
	 printf("current bill:%.2f",m);
	return 0;
}
