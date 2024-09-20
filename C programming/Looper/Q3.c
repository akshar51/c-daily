#include<stdio.h>

main(){
	//Sum of first and last digit.
	
	int sum;
	int last,first;
	int number;
	printf("Enter your number :");
	scanf("%d",&number);
	
	//First digit
	last = number % 10;
	
	//Second digit
	while(number>10){
		number = number / 10;
	}
	first = number;
	
	//Sum
	sum = first + last;
	printf("Sum of first and last digit :%d",sum);
	
}
