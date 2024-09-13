#include<stdio.h>

main(){
	char operator;
	printf("Enter u want to do +,-,*,/ :");
	scanf("%c",&operator);
	int a,b;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	int add = a + b;
	int sub = a - b;
	int multiply = a * b;
	int divide = a / b;
	switch(operator){
		case '+':
			printf("Addition of a and b is %d",add);
			break;
		case '-':
			printf("Suntraction of a and b is %d",sub);
			break;
		case '*':
			printf("Multiplication of a and b is %d",multiply);
			break;
		case '/':
			printf("Division of a and b is %d",divide);
			break;	
		default :
			printf("Enter valid operator.");		
	}
		
}
