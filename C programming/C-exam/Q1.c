#include<stdio.h>

main(){
	//C program that display the factorial
	
	int n,fact,i;
	int f=1;
	printf("Enter number to find the factorial :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	fact=f;
	printf("Factorial of number %d is %d",n,fact);
}
