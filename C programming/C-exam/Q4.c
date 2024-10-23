#include<stdio.h>

main(){
	//GIVEN NUMBER IS LEAP OR NOT
	
	int year;
	printf("Enter your year :");
	scanf("%d",&year);
	if (year % 4 == 0){
		printf("%d is a leap year.",year);
	}
	else{
		printf("Not a leap year.");
	}
}
