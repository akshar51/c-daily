#include<stdio.h>

main(){
	// LARGEST ELEMENT IN 2D ARRAY
	
	int i,j,max,row,col,a[10][10];
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
	max = a[0][0];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(max<a[i][j]){
				max = a[i][j];
			}
		}
	}
	printf("Largest element is %d",max);
}
