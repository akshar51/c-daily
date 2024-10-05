#include<stdio.h>

main(){
	//AVERAGE OF A GIVEN 2D ARRAY.
	
	int i,j,row,col,sum=0,num=0;
	float avg;
	printf("Enter array row :");
	scanf("%d",&row);
	printf("Enter array column :");
	scanf("%d",&col);
	int a[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			num++;
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			sum+=a[i][j];
		}
	}

	printf("Sum of all element is : %d\n",sum);
	avg = (float)sum / num;
	printf("Average of array is %.2f",avg);
}
