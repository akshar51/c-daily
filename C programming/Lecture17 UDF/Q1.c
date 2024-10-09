#include<stdio.h>

main(){
	int n;
	printf("Enter your number for cube : ");
	scanf("%d",&n);
	cube(n);
}
int cube(int n){
	int sum;
	sum=n*n*n;
	printf("Cube of %d is %d",n,sum);
}
