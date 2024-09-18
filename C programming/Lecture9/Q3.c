#include<stdio.h>

main(){
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
