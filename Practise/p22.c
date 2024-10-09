#include<stdio.h>

main(){
	//FIBONACCI NEW
	int num,i,result;
	int a = 0;
	int b = 1;
	printf("Enter number :");
	scanf("%d",&num);
	
	
	for(i=1;i<=num;i++){
		printf(" %d",a);
		result=a+b;
		a=b;
		b=result;
	}
}
