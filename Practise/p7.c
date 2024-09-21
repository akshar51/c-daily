#include<stdio.h>

main(){
	//User sum of number
	
	int i,a;
	int sum = 0;
	for (i=1;i<=5;i++){
		printf("Enter a number :");
		scanf("%d",&a);
		if (a<0){
			break;
		}
		sum = sum + a;
	}
	printf("Sum of number :%d",sum);

}
