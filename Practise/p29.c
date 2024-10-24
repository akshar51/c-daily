#include<stdio.h>

main(){
	//SQUARE OF 10,9,8,7,6
	
	// 100
	// 81 81
	// 64 64 64
	// 49 49 49 49
	// 36 36 36 36 36
	
	int i,j,num1;
	int num=10;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			num1=num*num;
			printf(" %d",num1);
		}
		num--;
		printf("\n");
	}
}
