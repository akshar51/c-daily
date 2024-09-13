#include<stdio.h>

main(){
	int a,b,c;
	printf("Enter value of first number :");
	scanf("%d",&a);
	printf("Enter value of second number :");
	scanf("%d",&b);
	printf("Enter value of third number :");
	scanf("%d",&c);
	if (a<b && a<c){
		printf("First number is minimum.");
	}
	else if (b<c && b<a){
		printf("Second number is minimum.");
	}
	else{
		printf("Third number is minimum.");
	}
}
