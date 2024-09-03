#include<stdio.h>

main(){
	int num1= 12;
	int num2= 6;
	int sum= num1 + num2;
	int sum2= num1 - num2;
	int sum3= num1 * num2;
	int sum4= num1 / num2;
	int sum5= num1 % num2; 
	printf("Addition of %d and %d is %d\n",num1,num2,sum);
	printf("Subtraction of %d and %d is %d\n",num1,num2,sum2);
	printf("Multiplication of %d and %d is %d\n",num1,num2,sum3);
	printf("Division of %d and %d is %d\n",num1,num2,sum4);
	printf("Modulo of %d and %d is %d\n",num1,num2,sum5);
	printf("%d + %d = %d\n",num1,num2,sum);
	printf("%d - %d = %d\n",num1,num2,sum2);
	printf("%d * %d = %d\n",num1,num2,sum3);
	printf("%d / %d = %d\n",num1,num2,sum4);
	printf("%d %% %d = %d",num1,num2,sum5);
}
