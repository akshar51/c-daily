#include<stdio.h>

main(){
	int i;
	int sum=0;
	float n;
	printf("Enter your number :");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("Sum = %d",sum);
	
}
