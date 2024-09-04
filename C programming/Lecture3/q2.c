#include<stdio.h>

main(){
	float b;
	float h, area;
	printf("Enter your base:");
	scanf("%f",&b);
	printf("Enter your height:");
	scanf("%f",&h);
	area = (b * h)/2;
	printf("Area of triangle is %f",area);
}
