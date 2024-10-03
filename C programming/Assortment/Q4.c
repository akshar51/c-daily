#include<stdio.h>

main(){
	// SUM OF ELEMENT IN ROW & COLUMN IN 2D ARRAY
	
	int i,j,row,col,a[10][10],rowNumber,colNumber,sum=0,sum2=0;
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
	printf("Enter row number :");
	scanf("%d",&rowNumber);
		if(rowNumber >= row){
			printf("Enter valid row number .");
		}
		else{
			printf("Element of row %d :",rowNumber);
			for(j=0;j<col;j++){
				printf("%d ",a[rowNumber][j]);
				sum += a[rowNumber][j];	
		}
		printf("\nSum of row %d : %d",rowNumber,sum);
		printf("\n\n");
		printf("Enter column number :");
		scanf("%d",&colNumber);
		if(colNumber >= col){
			printf("Enter valid column number .");
		}
		else{
			printf("Element of column %d :",colNumber);
			for(i=0;i<row;i++){
				printf("%d ",a[i][colNumber]);
				sum2 += a[i][colNumber];	
		}
		printf("\nSum of column %d : %d",colNumber,sum2);
	}
	}
}
