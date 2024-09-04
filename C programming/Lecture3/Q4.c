#include<stdio.h>
main(){
	float p;
	float r;
	float n;
	printf("Enter your principal amount :");
	scanf("%f",&p);
	printf("Enter your rate :");
	scanf("%f",&r);
	printf("Enter your month :");
	scanf("%f",&n);
	float area = (p*r*n) / 100;
	printf("Your simple interest is %f",area);
}
