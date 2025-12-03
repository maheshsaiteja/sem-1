// write a cprogram to print body mass index ?
#include <stdio.h>
int main(){
      float w,h,bmi;
	printf("ENTER HEIGHT IN METERS");
	scanf("%f",&h);
	printf("ENTER WEIGTH IN KILOGRAMS");
	scanf("%f",&w);
	bmi=w/(h*h);
	printf("BODY MASS INDEX:%f",bmi);
	return 0;
}

