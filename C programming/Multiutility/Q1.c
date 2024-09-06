#include<stdio.h>

main(){
	printf("Temperature Converter\n\n");
	float C;//Celsius
	printf("Enter your Celsius value :");
	scanf("%f",&C);
	float F = (9*C/5)+32;
	printf("Temperature in Fahrenheit :%.2f",F);
}
