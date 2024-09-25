#include<stdio.h>

main(){
	int i,j,space,row;
	//printf("Enter number of rows :");
	//scanf("%d",&row);
	for(i=5;i>=1;i--){
		for(;;){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
