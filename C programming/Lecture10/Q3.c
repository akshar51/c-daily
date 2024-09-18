#include<stdio.h>

main(){
	int i;
	int j;
	int sum;
	printf("Enter your table number :");
	scanf("%d",&j);
	for(i=1;i<=10;i++){
		sum = j * i;
		printf("%d x %d = %d\n",j,i,sum);
	}
}
