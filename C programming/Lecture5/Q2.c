#include<stdio.h>

main(){
	int a;
	printf("Enter your number :");
	scanf("%d",&a);
	if (a==0){
		printf("Number is neutral.");	
	}
	else if(a>0) {
		printf("Number is positive.");
	}
	else{
		printf("Number is negative.");
	}
}
