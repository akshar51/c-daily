#include<stdio.h>

main(){
	int n;
	printf("Enter your number : ");
	scanf("%d",&n);
	sum(n);
}

int sum(int n){
	if(n%3==0 && n%5==0){
		printf("The given number is divisible by both 3 & 5.");
	}
	else{
		printf("The given number is not divisible by both 3 & 5.");
	}
}
