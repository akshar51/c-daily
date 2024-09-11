#include<stdio.h>

main(){
	int a;
	printf("Enter your number :");
	scanf("%d",&a);
	if(a % 2 == 0){
		printf("EVEN");
	}
	else{
		printf("ODD");
	}
}
