#include<stdio.h>

main(){
	// STORING ELEMENT IN MATRIX FORM & SUM OF ALL ELEMENT
	
	int i,j,row,col,sum=0;
	int a[10][10];
	printf("Enter the number of rows :");
	scanf("%d",&row);
	printf("Enter the number of column :");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d\t",a[i][j]);
				sum = sum + a[i][j];// formula of sum all element	
			}
			printf("\n");
		}
		printf("Sum of all element is : %d",sum);
}
