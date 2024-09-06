#include<stdio.h>

main(){
	float HRA;
	float DA;
	float TA;
	float BaseSalary;
	
	//Base Salary
	printf("Enter your BaseSalary:");
	scanf("%f",&BaseSalary);
	
	//HRA
	printf("Enter your HRA :");
	scanf("%f",&HRA);
	float HRA_amount = (HRA/100) * BaseSalary;
	
	//DA
	printf("Enter your DA :");
	scanf("%f",&DA);
	float DA_amount = (DA/100) * BaseSalary;

	//TA
	printf("Enter your TA :");
	scanf("%f",&TA);
	float TA_amount = (TA/100) * BaseSalary;

	//Gross Salary
	float GrossSalary = BaseSalary + HRA_amount + DA_amount + TA_amount;
	printf("GrossSalary is %.2f Rs",GrossSalary);
	
}
