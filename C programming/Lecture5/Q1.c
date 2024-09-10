#include<stdio.h>

main(){
	int num1;
	int num2;
	printf("Enter your first number :");
	scanf("%d",&num1);
	printf("Enter your second number :");
	scanf("%d",&num2);
	
	if(num1 < num2){
		printf("num1 is smaller :%d",num1);
	}
	else{
		printf("num2 is smaller %d",num2);
	}
}
