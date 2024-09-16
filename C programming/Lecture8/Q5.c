#include<stdio.h>

main(){
	int i;
	int num1;
	int num2;
	printf("Enter the first number :");
	scanf("%d",&num1);
	printf("Enter the second number :");
	scanf("%d",&num2);
	for(num1;num1<=num2;num1++){
		num1 % 4 == 0;
		printf("%d\t",num1);
		num1++;
	}
}
