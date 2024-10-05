#include<stdio.h>

main(){
	//OPERATION OF TWO ARRAY AND STORE IN 3 ARRAY
	int i,j,row,col;
	printf("Enter size of row :");
	scanf("%d",&row);
	printf("Enter size of column :");
	scanf("%d",&col);
	int a[row][col];
	int a2[row][col];
	int a3[row][col];
	printf("Enter first array element :\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second array element :\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			a3[i][j]=a[i][j]+a2[i][j];
			printf("%d ",a3[i][j]);			
		}
		printf("\n");
	}

	
}
