#include<stdio.h>


// ADDITION
float add(float num1,float num2){
	float sum;
	printf("Enter the first number :");
	scanf("%f",&num1);
	printf("Enter the second number :");
	scanf("%f",&num2);
	sum = num1 + num2;
	printf("Addition of %.2f and %.2f is %.2f\n\n",num1,num2,sum);
}

//SUBTRACT
float sub(float num1,float num2){
	float sum;
	printf("Enter the first number :");
	scanf("%f",&num1);
	printf("Enter the second number :");
	scanf("%f",&num2);
	sum = num1 - num2;
	printf("Subtraction of %.2f and %.2f is %.2f\n\n",num1,num2,sum);
}

//MULTIPLY
float multiply(float num1,float num2){
	float sum;
	printf("Enter the first number :");
	scanf("%f",&num1);
	printf("Enter the second number :");
	scanf("%f",&num2);
	sum = num1 * num2;
	printf("Multiplication of %.2f and %.2f is %.2f\n\n",num1,num2,sum);
}

//DIVISION
float divide(float num1,float num2){
	float sum;
	printf("Enter the first number :");
	scanf("%f",&num1);
	printf("Enter the second number :");
	scanf("%f",&num2);
	sum = num1 / num2;
	printf("Division of %.2f and %.2f is %.2f\n\n",num1,num2,sum);
}

//MODULUS
float module(float num1,float num2){
	float sum;
	printf("Enter the first number :");
	scanf("%f",&num1);
	printf("Enter the second number :");
	scanf("%f",&num2);
	sum = (int)num1 % (int)num2;
	printf("Modulus of %.2f and %.2f is %.2f\n\n",num1,num2,sum);
}

main(){
	float a,b;
	int choice;
	
	while(1){
	printf("Press 1 for + \n");
	printf("Press 2 for - \n");
	printf("Press 3 for * \n");
	printf("Press 4 for / \n");
	printf("Press 5 for %% \n");
	printf("Press 0 for the exit \n");
	printf("\nEnter your choice :");
	scanf("%d",&choice);
	
		if(choice>0 && choice<=5){
			switch(choice){
			case 1 :
				add(a,b);
				break;
			case 2 :
				sub(a,b);
				break;
			case 3 :
				multiply(a,b);
				break;
			case 4 :
				divide(a,b);
				break;
			case 5 :
				module(a,b);
				break;
			}
		}
		else if(choice == 0){
			printf("You have successfully EXIT the calculator.");
			break;
		}
		else{
			printf("Enter valid number from choice !!");
			break;
		}
	}	
}
