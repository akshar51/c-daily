#include<stdio.h>
#define pi 3.14
main(){
	printf("Enter value of radius:");
	float r;
	scanf("%f",&r);
	float area = pi * r * r;
	printf("Area of circle is %f\n",area);
	
	//question 5
	float parameter = 2 * pi * r;
	printf("Enter your radius for parimeter:");
	scanf("%f",&r);
	printf("Parameter of circle is %f",parameter);
}
