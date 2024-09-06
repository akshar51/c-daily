#include<stdio.h>

main(){
	printf("Triangle Angle Finder\n");
	float first_angle;
	float second_angle;
	
	//first angle
	printf("Your first angle of right triangle :");
	scanf("%f",&first_angle);
	
	//second angle
	printf("Your second angle of right triangle :");
	scanf("%f",&second_angle);
	
	//final equation
	float angle = first_angle + second_angle;
	float third_angle = 180 - angle;
	printf("Your Third angle of right triangle is :%.f degree",third_angle);
}
