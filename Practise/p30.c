#include<stdio.h>

main(){
	int sum=0,num=0;
	do{
		sum= sum+num;
		printf("Enter a number :");
		scanf("%d",&num);
	}while(num>=0);
	printf("Sum of all positive number is : %d",sum);
}
