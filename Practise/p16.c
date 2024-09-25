#include<stdio.h>

main(){
	//     *
	//    * *
	//   * * * 
	//  * * * *
	// * * * * *
	int i,j,space,row;
	printf("Enter number of rows :");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(space=1;space<=(row-i);space++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
