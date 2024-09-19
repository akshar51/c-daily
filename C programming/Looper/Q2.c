#include<stdio.h>


main(){
	
	//Digit counter
	
	int number;
	int count = 0;
	printf("Enter your number :");
	scanf("%d",&number);
	while(number!=0){
		number = number/10;
		count++;
	}
	printf("Total number of digit :%d",count);
	
	
	
}
