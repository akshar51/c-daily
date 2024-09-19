#include<stdio.h>

main(){
	//FIBONACCI
	int num,i,result;
	int a = 0;
	int b = 1;
	printf("Enter number :");
	scanf("%d",&num);
	printf("%d %d",a,b);
	
	for(i=0;i<=num;i++){
		
		result=a+b;
		printf(" %d",result);
		a=b;
		b=result;
	}
}
