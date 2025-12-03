/* write a c program to print
*
**
***
****
*****  */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}
