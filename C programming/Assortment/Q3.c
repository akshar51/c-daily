#include<stdio.h>

main(){
	// TRANSPOSE MATRIX
	
	int i,j,row,col,a[10][10];
	printf("Enter the size of array row :");
	scanf("%d",&row);
	printf("Enter the size of array col :");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	
}
