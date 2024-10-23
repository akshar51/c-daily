#include<stdio.h>

//USING POINTER TO SWAP THE VALUE OF TWO INTEGER
int swap();

int swap(int *ptr,int *ptr1){
	int temp;
	temp=*ptr;
	*ptr=*ptr1;
	*ptr1=temp;
}

main(){
	int a,b;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("After swap :\n Value of a is : %d \n Value of b is : %d",a,b);
}
