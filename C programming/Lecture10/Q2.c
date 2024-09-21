#include<stdio.h>

main(){
	
	//FACTORIAL
	
	int i,sum;
	float j;
	printf("Enter your number :");
	scanf("%f",&j);
	
	for(i=1;i<=j;i++){
		sum=sum*i;
	}
	printf("Factorial number is %d",sum);
}
