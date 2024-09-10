#include<stdio.h>

main(){
	int a,b,c;
	printf("Enter MATHS mark :");
	scanf("%d",&a);
	printf("Enter ENGLISH mark :");
	scanf("%d",&b);
	printf("Enter SCIENCE mark :");
	scanf("%d",&c);
	int sum = a+b+c;
	float avg = sum/3;
	printf("Sum mark :%d\n",sum);
	printf("Average mark :%.2f\n",avg);
	
	if(avg>85){
		printf("A Grade");
	}
	else if(avg>75 && avg<85){
		printf("B Grade");
	}
	else if(avg>65 && avg<75){
		printf("C Grade");
	}
	else if(avg>33 && avg<65){
		printf("D Grade");
	}
	else{
		printf("FAIL !!!");
	}
	
	
}
