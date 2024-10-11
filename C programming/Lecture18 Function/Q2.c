#include<stdio.h>
float salary(float,float,float,float);
main(){
	float BaseSalary,HRA,DA,TA;
	printf("%f",salary(BaseSalary,HRA,DA,TA));
}

float salary(float a,float b,float c,float d){
	float HRA;
	float DA;
	float TA;
	float BaseSalary;
	printf("Enter your BaseSalary:");
	scanf("%f",&BaseSalary);
	
	printf("Enter your HRA :");
	scanf("%f",&HRA);
	float HRA_amount = (HRA/100) * BaseSalary;
	
	printf("Enter your DA :");
	scanf("%f",&DA);
	float DA_amount = (DA/100) * BaseSalary;
	
	printf("Enter your TA :");
	scanf("%f",&TA);
	float TA_amount = (TA/100) * BaseSalary;
	
	float GrossSalary = BaseSalary + HRA_amount + DA_amount + TA_amount;
	return GrossSalary;
}
