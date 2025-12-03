/* write a program using assignment operator by taking input from user*/
#include <stdio.h>

int main() {
int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf(" by assiging a Value to b: %d\n", b=a);
printf("add value b to a and stores in a:%d \n", a+=b);
printf ("substract b from a and stores in a: %d\n", a-=b);
printf("multiplies b valve and a and assigns to a: %d\n",a*=b); 
printf("divided a&b and store in the quotient in a : %d\n",a/=b);
printf ("divided  a&b and story remainder in a: %d\n", a%=b);
return 0;
}
