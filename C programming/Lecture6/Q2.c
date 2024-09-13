#include<stdio.h>

main(){
	int a,b,c,d;
	printf("Enter a value of first number:");
	scanf("%d",&a);
	printf("Enter a value of second number:");
	scanf("%d",&b);
	printf("Enter a value of third number:");
	scanf("%d",&c);
	printf("Enter a value of fourth number:");
	scanf("%d",&d);
	if(a>b && a>c && a>d){
		printf("Maximum value is first number.");
	}
	else if(b>c && b>d && b>a){
		printf("Maximum value is second number.");
	}
	else if (c>d && c>a && c>b){
		printf("Maximum value is third number.");
	}
	else{
		printf("Maximum value is fourth number.");
	}
	
}
