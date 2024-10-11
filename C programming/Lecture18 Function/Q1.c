#include<stdio.h>
float temp(float);
main(){
	float c;
	printf("Enter temperature :");
	scanf("%f",&c);
	printf("%f",temp(c));
}

float temp(float c){
	float f;
	f=(1.8*c)+32;
	return f;
}
