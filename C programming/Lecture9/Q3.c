#include<stdio.h>

main(){
	//PRINT EVEN NUMBER FROM 1 TO N
	int i = 1;
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	do{
		if(i%2==0){
			printf("%d\t",i);
		}
		i++;
	}
	while(i<=num);
	
}
